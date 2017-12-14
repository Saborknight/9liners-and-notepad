# 9Liners & Notepad
by: [Chief Wiggum](https://forums.bistudio.com/profile/926664-chief_wiggum/)  
BI Forum: https://forums.bistudio.com/forums/topic/178540-ingame-9liners-notepad/
<center>
	<a href="http://i.imgur.com/GOC07EV.png">
		<img
			src="http://i.imgur.com/GOC07EV.png"
			title="9Liners &amp; Notepad">
	</a>
</center>

## Requirements
[CBA_A3](https://github.com/CBATeam/CBA_A3)

## Downloads
- [Github Releases](https://github.com/Saborknight/9liners-and-notepad/releases/latest)
- [Steam Workshop](http://steamcommunity.com/sharedfiles/filedetails/?id=1210050323)

## What is it?
9Liners & Notepad is a client-side mod, that allows you to open a couple of documents, like a notepad or CAS-9Liner directly ingame.
You can simply open these documets by pressing the assigned shortcut and you'll be able to write on them, save them or clear them.
Once you save a page, it will be bound to your profile, which means, that even if you leave the mission and join a different one, your note will still be on the page where you wrote it down.

9Liners & Notepad brings the following documents to your game:
- CAS 9Liner sheet:
	<br>
	<a href="http://img4.fotos-hochladen.net/uploads/20150301000060xuhlm7os.jpg" target="_blank">
		<img
			src="http://img4.fotos-hochladen.net/thumbnail/20150301000060xuhlm7os_thumb.jpg"
			title="CAS 9Liner sheet"
			height="100"
			width="auto">
	</a>
- Medivac 9Liner sheet:
	<br>
	<a href="http://img4.fotos-hochladen.net/uploads/201503010000znxfrm23et.jpg" target="_blank">
		<img
			src="http://img4.fotos-hochladen.net/thumbnail/201503010000znxfrm23et_thumb.jpg"
			title="Medivac 9Liner sheet"
			height="100"
			width="auto">
	</a>
- Notepad:
	<br>
	<a href="http://img4.fotos-hochladen.net/uploads/201503010000zr6ag2yvoi.jpg" target="_blank">
		<img
			src="http://img4.fotos-hochladen.net/thumbnail/201503010000zr6ag2yvoi_thumb.jpg"
			title="Notepad sheet"
			height="100"
			width="auto">
	</a>
- Gunship Call-For-Fire 5Liner sheet:
	<br>
	<a href="http://img4.fotos-hochladen.net/uploads/2015030100008ah3y146wf.jpg" target="_blank">
		<img
			src="http://img4.fotos-hochladen.net/thumbnail/2015030100008ah3y146wf_thumb.jpg"
			title="Gunship Call-For-Fire 5Liner sheet"
			height="100"
			width="auto">
	</a>
- CAS Check-In Briefing sheet:
	<br>
	<a href="http://img4.fotos-hochladen.net/uploads/201503010000jny20przcs.jpg" target="_blank">
		<img
			src="http://img4.fotos-hochladen.net/thumbnail/201503010000jny20przcs_thumb.jpg"
			title="CAS Check-In Briefing sheet"
			height="100"
			width="auto">
	</a>
- Adjust-Fire-Mission sheet:
	<br>
	<a href="http://img4.fotos-hochladen.net/uploads/201503010000u7rl3bog2s_thumb.jpg" target="_blank">
		<img
			src="http://img4.fotos-hochladen.net/thumbnail/201503010000u7rl3bog2s_thumb.jpg"
			title="Adjust-Fire-Mission sheet"
			height="100"
			width="auto">
	</a>
- Fire-For-Effect-Mission sheet:
	<br>
	<a href="http://img4.fotos-hochladen.net/uploads/201503010000iv4axcflqg_thumb.jpg" target="_blank">
		<img
			src="http://img4.fotos-hochladen.net/thumbnail/201503010000iv4axcflqg_thumb.jpg"
			title="Fire-For-Effect-Mission sheet"
			height="100"
			width="auto">
	</a>
- Marking-Mission sheet:
	<br>
	<a href="http://img4.fotos-hochladen.net/uploads/2015030100004acqjyrhl3.jpg" target="_blank">
		<img
			src="http://img4.fotos-hochladen.net/uploads/2015030100004acqjyrhl3.jpg"
			title="Marking-Mission sheet"
			height="100"
			width="auto">
	</a>
- Target-Location-Methods Help sheet (no interaction):
	<br>
	<a href="http://img4.fotos-hochladen.net/uploads/2015030100008dbc25764k.jpg" target="_blank">
		<img
			src="http://img4.fotos-hochladen.net/uploads/2015030100008dbc25764k.jpg"
			title="Target-Location-Methods Help sheet"
			height="100"
			width="auto">
	</a>

## How does it work?
### Usage as player
First off, you have to press ESC and navigate to: `Options\Controls\Configure Addons\9Liners & Notepad`.  
Here you have to assign a hotkey for each document. Also make sure to assign the 'Disable Controls' hotkey. You'll need it later.

Once you've assigned your hotkeys, you're able to open the documents by pressing the hotkeys.

Each document works the following way:
- Pressing the left arrow opens the previous page
- Pressing the right arrow opens the next page
- Pressing 'SAVE' saves the current page.
- Pressing 'CLEAR PAGE' clears the current page
- Pressing 'CLEAR ALL' clears all pages  
	**Note**: There isn't any kind of "Do you really want to..." selection if you press "CLEAR PAGE/ALL". So think before you press it!
- Do a single click next to the document will enable controls.  
	You'll be able to control you character/vehicle, use TFAR and everything else while the document is shown.  
	In order to release the controls of your character/vehicle and edit the document, simply press your 'Disable Controls' Hotkey that you've assigned earlier.
- Do a double click next to the document will close it.  
	You can also close it by pressing ESC.

Each document will open at the page where you previously closed it.

### Usage as mission maker
This mod uses the `profileNamespace` command to save the pages text. Each page has its own variable in `profileNamespace`.

If you want so set each users text on page 1 of their notepads to "I MADE THIS MISSION!", simply add this to your init.sqf:

```c
profileNamespace setVariable ["cw_noteblock_pageText_1", "I MADE THIS MISSION!"];
```

If you want only one user to have this text on page1, you have to run this code in a local script.
You can also use an other page for this! (Notepad contains 50 pages)

Hope you like it,

~ Chief Wiggum

**Note:** I'm not liable for any damages/crashes...etc. at your system or yourself!  


## Issues
Have any issues? Feature requests? Want to add on any more sheets? [Submit an issue](https://github.com/Saborknight/9liners-and-notepad/issues/new)!

# For Developers
Send in your [Pull Requests](https://github.com/Saborknight/9liners-and-notepad/pulls) for any changes you would like to be made to the mod. Any and all help in the development of this mod is very welcome.

## Install
Currently the build system is being worked on. Once done, this will allow for easy building of the mod for use in Arma 3.

The build system will require:
- Python 3
- Arma 3 Tools on Steam

## Naming conventions
There are a few ways this mod has been named in the past (9liners_and_notepad, 9liner_and_notepad, 9Liners_and_Notepad, 9Liner_and_Notepad, nineliner_and_notepad, etc.)

To normalise these names, and make them less likely to run into problems in the future regarding the inclusion of a number in the name:
- for code: nineliners_and_notepad
- for urls: 9liners-and-notepad
- for presentation: 9Liners & Notepad

### Prefixes
The prefix `nln_` should be used where appropriate to avoid any potential name clashes with other mods.

## Contact
For any questions, contact Saborknight (Arend) on the [BI Forums](https://forums.bistudio.com/profile/1135269-arend-the-bastard/) or the 7th Air Assault Brigade's [Discord](http://bit.ly/7aa-join-discord).
