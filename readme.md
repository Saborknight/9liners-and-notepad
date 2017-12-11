# 9Liners & Notepad
by: [Chief Wiggum](https://forums.bistudio.com/profile/926664-chief_wiggum/)
BI Forum: https://forums.bistudio.com/forums/topic/178540-ingame-9liners-notepad/
![9Liner & Notepad](http://i.imgur.com/GOC07EV.png)

## Requirements
[CBA_A3](https://github.com/CBATeam/CBA_A3)

## Downloads
[Github Releases](https://github.com/Saborknight/9liner-and-notepad/releases/latest)
[Dropbox](https://www.dropbox.com/s/dbfwz3pmy71tnks/%40CW_Ninliner_and_Notepad_031.zip?dl=0)
[Armaholic](http://www.armaholic.com/page.php?id=28180)
[PlayWithSix](http://play.withsix.com/Arma-3/mods/_RMcu9kszkavJ4TkfKjhgQ/9Liners-and-Notepad)

## What is it?
9Liners & Notepad is a client-side mod, that allows you to open a couple of documents, like a notepad or CAS-9Liner directly ingame.
You can simply open these documets by pressing the assigned shortcut and you'll be able to write on them, save them or clear them.
Once you save a page, it will be bound to your profile, which means, that even if you leave the mission and join a different one, your note will still be on the page where you wrote it down.

9Liners & Notepad brings the following documents to your game:
- CAS 9Liner sheet:
![CAS 9Lines sheet](http://img4.fotos-hochladen.net/thumbnail/20150301000060xuhlm7os_thumb.jpg)
- Medivac 9Liner sheet:
![Medivac 9Liner sheet](http://img4.fotos-hochladen.net/thumbnail/201503010000znxfrm23et_thumb.jpg)
- Notepad:
![Notepad](http://img4.fotos-hochladen.net/thumbnail/201503010000zr6ag2yvoi_thumb.jpg)
- Gunship Call-For-Fire 5Liner sheet:
![Gunship Call-For-Fire 5Liner sheet](http://img4.fotos-hochladen.net/thumbnail/2015030100008ah3y146wf_thumb.jpg)
- CAS Check-In Briefing sheet:
![CAS Check-In Briefing sheet](http://img4.fotos-hochladen.net/thumbnail/201503010000jny20przcs_thumb.jpg)
- Adjust-Fire-Mission sheet:
![Adjust-Fire-Mission sheet](http://img4.fotos-hochladen.net/thumbnail/201503010000u7rl3bog2s_thumb.jpg)
- Fire-For-Effect-Mission sheet
![Fire-For-Effect-Mission sheet](http://img4.fotos-hochladen.net/thumbnail/201503010000iv4axcflqg_thumb.jpg)
- Marking-Mission sheet:
![Marking-Mission sheet](http://img4.fotos-hochladen.net/uploads/2015030100004acqjyrhl3.jpg)
- Target-Location-Methods Help sheet (no interaction):
![Target-Location-Methods Help sheet](http://img4.fotos-hochladen.net/uploads/2015030100008dbc25764k.jpg)

## How does it work?
### Usage as player

First off, you have to press ESC and navigate to: `Options\Controls\Configure Addons\9Liners&Notepad`
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
This mod uses the `profileNamespace` command to save the pages text.
Each page has its own variable in `profileNamespace`.

If you want so set each users text on page 1 of their notepads to "I MADE THIS MISSION!", simply add this to your init.sqf:

```c
profileNamespace setVariable ["cw_noteblock_pageText_1", "I MADE THIS MISSION!"];
```

If you want only one user to have this text on page1, you have to run this code in a local script.
You can also use an other page for this! (Notepad contains 50 pages)

Hope you like it,

~ Chief Wiggum

**Note:**
I'm not liable for any damages/crashes...etc. at your system or yourself!
[![Arma Public Licence](https://www.bistudio.com/assets/img/licenses/APL-SA.png)](https://www.bistudio.com/community/licenses/arma-public-license-share-alike)
This work is licensed under the Arma Public License - Share Alike

# For Developers
Send in your [Pull Requests](https://github.com/Saborknight/9liner-and-notepad/pulls) for any changes you would like to be made to the mod. Any and all help in the development of this mod is very welcome.

Currently the build system is being worked on. Once done, this will allow for easy building of the mod for use in Arma 3.
The build system will require:
- Python 3.6 or higher
- Arma 3 Tools on Steam

For any questions, contact Saborknight (Arend) on the 7th Air Assault Brigade's [Discord](http://bit.ly/7aa-join-discord).

## Feature Requests
1. Implement Navigation bar for navigating between pre-formatted pages and the notepad [Source](https://forums.bistudio.com/forums/topic/178540-ingame-9liners-notepad/?do=findComment&comment=2817361)
1. Integrate ACE Interaction for selection of sheets. This should provide a second, more fluid method of navigation than above [Source](https://forums.bistudio.com/forums/topic/178540-ingame-9liners-notepad/?do=findComment&comment=2839202)
1. Allow sharing of sheets (through ACE? Like the "Copy Map" function) [Source](https://forums.bistudio.com/forums/topic/178540-ingame-9liners-notepad/?do=findComment&comment=2807610)
1. Implement "Open PlayerX's 9Liner/Notepad" [Source](https://forums.bistudio.com/forums/topic/178540-ingame-9liners-notepad/?do=findComment&comment=2807605)
