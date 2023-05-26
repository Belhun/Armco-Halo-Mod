# Armco-Halo-Mod

Welcome to ARMCO's Halo mod data. In this section, I will provide a breakdown of the file structure that I am currently aware of. I, Belhun, am still learning a lot about Arma 3 coding and don't have a great deal of experience with this mod. However, I do have some coding experience and will do my best to keep this mod updated and hopefully add more in the future.

https://steamcommunity.com/sharedfiles/filedetails/?id=2961207730

## File Break Down

```sh
.
├── ARMCO-Halo-mod
│   ├── Build_PBOs.bat (Mod build script)
│   ├── Setup.bat (Development Enviorment setup script)
│   ├── armco_armours (Where the new Armours are being made)
│   │   ├── Data (img Files for armco_armours)
│   │   ├── CfgPatchesMisc.hpp (Everything that needs to go into CfgPatches plus some additional items)
│   │   ├── CfgVehicleSoldier.hpp (These are the base Solders, needed to either spawn pre made solders in editor or Zues or use them to make uniforms)
│   │   ├── CfgWeaponsCArmour.hpp (Custom Armours go here)
│   │   ├── CfgWeaponsCHelmet.hpp (Custom Helmets go here)
│   │   ├── CfgWeaponsSArmour.hpp (Squad based armours go here)
│   │   ├── CfgWeaponsSHelmet.hpp (Squad based Helmet go here)
│   │   ├── CfgWeaponsUniform.hpp (Uniforms go here)
│   │   ├── config.cpp (all the hpp files go here)
│   ├── armco_items (All Items)
│   │   ├── Data (img Files for armco_items)
│   │   ├── CfgCBackpacks.hpp (Holds Custom Backpacks)
│   │   ├── CfgMiscHelmets.hpp (Holds the berets and other hats)
│   │   ├── CfgPatches.hpp (all the named shit goes here)
│   │   ├── CfgSBackpacks.hpp (Squad Backpacks go here)
│   │   ├── config.cpp (all the hpp files go here and are configured here)
│   ├── armco_units (Placeable Units)
│   │   ├── Cfginven.hpp (Inventory definitons like backpacks)
│   │   ├── CfgPatches.hpp (Defineing it all as the name says)
│   │   ├── CfgVehicles.hpp (Base solders are here with all the info on solders)
│   │   ├── CfgWeapons.hpp (Weapon definitions)
│   │   ├── config.cpp ()
│   ├── armco_vehicles (New)
|   │   ├── Pelican (Holds all the Pelican info)
|   │   │   ├── data (Holds all the textures)
|   │   │   ├── cfgPatches.hpp (holds the patches and faction info and catagory)
|   │   │   ├── config.cpp (has all the Pelicans info and class)
|   │   │   ├── fn_PelicanLoadValidate.sqf (holds the script for Loading Vehicals onto the Pelican)
|   │   │   ├── fn_PelicanUnLoadValidate.sqf (Holds the textures for unloading vehcials from pelicans)
|   │   ├── Warthog (Holds all the new Warthog info)
|   │   │   ├── data (Holds all the textures)
|   │   │   ├── cfgPatches.hpp (holds the patches and faction info and catagory)
|   │   │   ├── config.cpp (has all the warthog info and class)
├── ArmourBreakdown.md (This hold the Armour breakdown of the hidden selctions)
├── README.md (this...)
└── example
    └── @armcohalo
        └── mod.cpp
```

## Changing the Build_PBOs for your own needs

So, what exactly is `Build_PBO` and how can you use it to simplify your life if you don't know much about `.bat` files?

Simply put, Build_PBO is a .bat file that automates simple tasks that can become repetitive over time. In my case, it automates the building of each file into a PBO and places it into my local test mod. This local test mod is incredibly useful for quickly testing changes or additions to see if they work or not. All I need to do is double-click the .bat file, and it will delete all old .pbo files and pack up the new ones.

What do you need to use and modify the .bat file? Not much, actually - you only need one program called [PBO Manager](https://pbo-manager-v-1-4.software.informer.com/download/#downloading). Just be sure to remember where you install this program as we will need the directory of PBO Manager.

One more thing you need to know is that you need to create a testing file. This testing file should use the `example_build` structure. This file structure contains everything you need to run this mod in Arma.

### Breaking Down Build_PBO

To make things easy for you, I've provided two files: `Setup.bat` and `Build_PBOs.bat`.

To set up the Build_PBOs.bat file, simply take a look at the following code:

```ps
C:
cd C:\Program Files\PBO Manager v.1.4 beta
```

Change the C: to the appropriate drive letter where you have PBO Manager installed. If you've installed PBO Manager in a custom directory, replace `cd C:\Program Files\PBO Manager v.1.4 beta` with the path to your installation folder. Just make sure that your path looks similar to the following file structure:

![a file structure with a mouse pointing to PBOConsole.exe](https://i.imgur.com/R7J37l3.png)

Once you've made the necessary changes, run `Build_PBOs.bat`. If you run into any issues or have any questions, don't hesitate to contact Belhun#0001 on Discord.

## Retexturing info

Want to help with retexturing? Look no further than the "Default Textures" and "png Files" folders. The "png Files" directory is where all the .paa files are stored as .png files, so you can easily make changes without the hassle of constantly converting back and forth. Just be sure to pop your new textures in the right place in the "png files" folder.

Keep in mind that the "Default Textures" folder has textures we use all the time. Anything in the "old" folder is outdated and probably won't work.

## Recommend Tools

### VS Code

- [Visual Studio Code](https://code.visualstudio.com/) is the editor that I recommend for writing code. To make it more useful for Arma 3 modding, you can install the following extensions:
  - [Arma Dev](https://marketplace.visualstudio.com/items?itemName=ole1986.arma-dev)
  - [SQF Language](https://marketplace.visualstudio.com/items?itemName=Armitxes.sqf)
  - Optionally [Fig Files Intellisense](https://marketplace.visualstudio.com/items?itemName=kiriko.fig-unreleased)

### Arma Tools

You will need some tools specifically for Arma 3 modding:

- [PBO Manager](https://pbo-manager-v-1-4.software.informer.com/download/#downloading) for managing and packing PBO files for testing
- [Arma 3 Tools](https://store.steampowered.com/app/233800/Arma_3_Tools/)

### _.paa Files_

If you need to work with .paa files, these resources can be helpful:

- [paa.gruppe-adler.de](https://paa.gruppe-adler.de/) a website that allows you to convert .paa files to PNGs

- [.paa Gimp Plugin](https://github.com/gruppe-adler/paa-gimp-plugin)

### Hidden Selections

For managing hidden selections, you can refer to the following resources:

- [Armour Breakdown With Pictures github wiki](https://github.com/Belhun/Armco-Halo-Mod/wiki/Armour-Breakdown-With-Pictures)

- [Optre HiddenSelections google doc](https://docs.google.com/document/d/1ILyvFV8opoARs_2hy4hRAU4_hr4qWrAQKfJ4UlC5K5c/edit#)

### Git

If you are using GitHub to manage your modding project, you will need to install Git and if you're unfamiliar with the command line GitHub Desktop:

- [Git](https://git-scm.com/downloads)
- [GitHub Desktop](https://desktop.github.com/)

if you need anything contact me on discord Belhun#0001
