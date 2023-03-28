# Armco-Halo-Mod
This is ARMCO's Halo mod Data, I will be providing a breakdown of the file structure so far that am aware, I (Belhun) am still learning much about Arma 3 coding and don't have much experience with this. but iv got a little bit of coding experience and will be trying my best to update this mod and hopefully add more in the future.


### File Break Down

- Armco-Halo-Mod
- .vscode
    - Arma-dev.json {This file works with the Name: Arma-dev Link: https://marketplace.visualstudio.com/items?itemName=ole1986.arma-dev}
  - ARMCO-Halo-mod
    - custom_armours(here are most custom ODST armors)
    - custom_dress_uniforms (here are all the Dress uniforms)   
    - custom_emergency(these are the files partaining to armors for Emergicy services)
    - custom_groups(This is where peaple are defined, for example where each squad is defined)
    - custom_vehicles(where Pelican and Warthog files)
    - Build_PBOs.bat{This is a script that will go into PBO manager and execute a set of commands to pack all custom_blank's into PBOs and place them in a file that I use to test the mod}
    - cfgPatches.hpp
    - config.cpp
  - build{arma-dev location to place builds}
  - Default Textures{This holds a bunch of png's of textures we can easily access to use for retexturing(some are from OPTRE and others are from older versions of this mod)}
  - png files{every png of this mod before it was taken over and uploaded to github}
  

## Changing the Build_PBOs for your own needs

So! what is the Build_PBO and how can you use it to help yourself without knowing much about .bat files?
First of all, Build_PBO is a .bat file, it's something used to automate simple things that can get annoying to do over and over.
 
The thing it's Helping me with is Automating the Building of Each file into a PBO and placing it into my local test mod.

This local test mod is super useful for seeing if what iv just added or changed will work or not, and all I need to do is double-click this .bat file and it will Delete all the old .pbo files and pack up the new ones. 

what do I need to use and change the .bat file? well not much you only need one program, called [PBO Manager](https://pbo-manager-v-1-4.software.informer.com/download/#downloading). keep in mind where you install this as we will need the directory of PBO manager.

one more thing that you need for using this .bat file is Create a testing file, This testing file should use the "example_build" Structure this file structure has everything you need to run this mod in arma

### Breaking Down Build_PBO

So iv made this as easy as possible we have 2 Files Setup.bat and Build_PBOs.bat
all you will need to change on your end is in Build_PBOs.bat where you see the following
```
C:
cd C:\Program Files\PBO Manager v.1.4 beta
```
so the ``` C: ``` should be set to whatever drive you have your PBO Manager set up in, so that could be  ``` C: ```, ``` D: ```, ``` E: ```,  ``` (Drive Letter): ``` whatever your drive letter is. Then you want to change ``` cd C:\Program Files\PBO Manager v.1.4 beta ``` to where ever you have So if you instead have it installed in a custom place it should look like ``` cd "PBO manager location" ``` you just have to make sure the location you point to looks like this 
![a file structure with a mouse pointing to PBOConsole.exe](https://i.imgur.com/R7J37l3.png)

once you change that running it should work(if not or your unsure and have questions please don't be afraid to ask Belhun#0001 on discord)


##Retexturing info
So you want help Retexturing The main files you are going to be looking at are the files in 




## tools I recommend
[Visual Studio Code](https://code.visualstudio.com/) is the Editor I use for writing all the code I use.
I recommend these extensions for Visual Studio Code
- [Arma Dev](https://marketplace.visualstudio.com/items?itemName=ole1986.arma-dev)
- [SQF Language](https://marketplace.visualstudio.com/items?itemName=Armitxes.sqf)
- optionally [Fig Files Intellisense](https://marketplace.visualstudio.com/items?itemName=kiriko.fig-unreleased)





