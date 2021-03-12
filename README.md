# dwmblocks
Modular status bar for dwm written in c.
# usage
To use dwmblocks first run 'make' and then install it with 'sudo make install'.
After that you can put dwmblocks in your xinitrc or other startup script to have it start with dwm.
# modifying blocks
The statusbar is made from text output from commandline programs.
Blocks are added and removed by editing the blocks.h header file.
By default the blocks.h header file is created the first time you run make which copies the default config from blocks.def.h.
This is so you can edit your status bar commands and they will not get overwritten in a future update.
# patches
Here are some patches to dwmblocks that add features that I either don't want to merge in, or that require a dwm patch to work.
I do not maintain these but I will take pull requests to update them.
<br>
<a href=https://gist.github.com/IGeraGera/e4a5583b91b3eec2e81fdceb44dea717>dwmblocks-statuscmd-b6b0be4.diff</a>

### edit by rabuu
`blocks.def.h` renamed to `config.def.h`.
<br>
Scripts in `scripts` do not work out of the box. In any way these scripts must be put or linked in PATH.
<br>
The scripts get the colors with the `xgetres` command. It won't work unless you install it. It's available in the AUR.
You also have to define the colors you want in a working Xresources file.
The values you have to set are:
* `dwmblocks.tagcolor`
* `dwmblocks.hostanduser_col`
* `dwmblocks.keyboard_layout_col`
* `dwmblocks.network_col`
* `dwmblocks.volume_col`
* `dwmblocks.memory_col`
* `dwmblocks.date_col`
