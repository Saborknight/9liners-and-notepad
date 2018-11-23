$projectRoot    = Split-Path -Parent $PSScriptRoot
$buildPath      = "$projectRoot\.build\@nineliners_and_notepad"
$releasePage    = "https://github.com/KoffeinFlummi/armake/releases"
$downloadPage   = "https://github.com/KoffeinFlummi/armake/releases/download/v{0}/armake_v{0}.zip"
$armake         = "$projectRoot\tools\armake.exe"
$tag            = iex 'git describe --tag | sed "s/-.*-/-/"'
$privateKeyFile = "$buildPath\keys\nln_$tag.biprivatekey"
$timestamp      = Get-Date -UFormat "%T"
[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12


function Compare-VersionNewerThan {
    param(
        [Parameter(Mandatory=$True)]
        $version1,

        [Parameter(Mandatory=$True)]
        $version2
    )

    $version1 = $version1.Split(".") | % {[int] $_}
    $version2 = $version2.Split(".") | % {[int] $_}

    $newer = $False
    for ($i = 0; $i -lt $version1.Length; $i++) {
        if ($version1[$i] -gt $version2[$i]) {
            $newer = $True
            break
        }
    }

    $newer
}


function Get-InstalledArmakeVersion {
    if (Test-Path $armake) {
        $version = & $armake --version
        $version = $version.Substring(1)
    } else {
        $version = "0.0.0"
    }

    $version
}


function Get-LatestArmakeVersion {
    $client = New-Object Net.WebClient
    $content = $client.DownloadString($releasePage)
    $client.dispose()

    $match = $content -match "<a href="".*?/releases/download/v(.*?)/.*?.zip"".*?>"
    if (!$match) {
        Write-Error "[$timestamp] Failed to find valid armake download link."
        $version = "0.0.0"
    } else {
        $version = $matches[1]
    }

    $version
}


function Update-Armake {
    param(
        [Parameter(Mandatory=$True)]
        $url
    )

    New-Item "$PSScriptRoot\temp" -ItemType "directory" -Force | Out-Null

    Write-Output "Downloading armake..."
    $client = New-Object Net.WebClient
    $client.DownloadFile($url, "$PSScriptRoot\temp\armake.zip")
    $client.dispose()

    Write-Output "Download complete, unpacking..."
    Expand-Archive "$PSScriptRoot\temp\armake.zip" "$PSScriptRoot\temp\armake"
    Remove-Item "$PSScriptRoot\temp\armake.zip"

    if ([Environment]::Is64BitProcess) {
        $binary = Get-ChildItem -Path "$PSScriptRoot\temp\armake" -Include "*.exe" -Recurse | Where-Object {$_.Name -match ".*w64.exe"}
    } else {
        $binary = Get-ChildItem -Path "$PSScriptRoot\temp\armake" -Include "*.exe" -Recurse | Where-Object {$_.Name -match ".*w64.exe"}
    }
    Move-Item $binary.FullName $armake -Force

    Remove-Item "$PSScriptRoot\temp" -Recurse -Force
}


function Create-Private-Key {
    Write-Output "  [$timestamp] Creating key pairs for $tag"
    & $armake keygen -f "keys\nln_$tag"

    if (!(Test-Path -Path $privateKeyFile)) {
        Write-Error "[$timestamp] Failed to generate key pairs $privateKeyFile"
        return $False
    }

    return $True
}


function Build-Directory {
    param(
        [Parameter(Mandatory=$True)]
        $directory
    )

    $component = $directory.Name
    $fullPath  = $directory.FullName
    $parent    = $directory.Parent
    $binPath   = "$buildPath\$parent\nln_$component.pbo"
    $prefix    = Get-Content $fullPath'\$PREFIX$'

    if (Test-Path -Path $binPath) {
        Remove-Item $binPath
        Write-Output "  [$timestamp] Updating PBO $component"
        & $armake build -p --force -k $privateKeyFile -e prefix=$prefix $fullPath $binPath
    } else {
        Write-Output "  [$timestamp] Creating PBO $component"
        & $armake build -p --force -k $privateKeyFile -e prefix=$prefix $fullPath $binPath

    }

    if ($LastExitCode -ne 0) {
        Write-Error "[$timestamp] Failed to build $component."
    }
}


function Main {
    $installed = Get-InstalledArmakeVersion
    $latest    = Get-LatestArmakeVersion

    if (Compare-VersionNewerThan $latest $installed) {
        Write-Output "Found newer version of armake:" "  Installed: $installed" "  Latest: $latest"
        Update-Armake ($downloadPage -f $latest)
        Write-Output "Update complete, armake up-to-date."
    }

    $orgLocation = Get-Location
    New-Item "$buildPath" -ItemType "directory" -Force | Out-Null
    New-Item "$buildPath\keys" -ItemType "directory" -Force | Out-Null
    Set-Location -Path $buildPath

    if (Create-Private-Key) {
        foreach ($folder in "addons") {
            New-Item "$buildPath\$folder" -ItemType "directory" -Force | Out-Null
            foreach ($component in Get-ChildItem -Directory "$PSScriptRoot\..\$folder") {
                Build-Directory $component
            }
        }
    }

    Set-Location $orgLocation
}

Main
