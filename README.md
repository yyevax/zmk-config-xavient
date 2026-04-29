# XAVIEN Firmware

## Keymap

This is a [ZMK](https://zmk.dev) config repo for Xavien, a 36-key split mech keyboard.

This repo is following the format of zmk-config used by [caksoylar](https://github.com/caksoylar/zmk-config).

This is keyboard is based on the following open sourced boards:
- [Corne](https://github.com/foostan/crkbd)
- [Swoop](https://github.com/jimmerricks/swoop)
both are using 3 rows and 5 columns of keys with 3 thumb keys on each side.

This keymap is mainly based on the [Miryoku](https://github.com/manna-harbour/miryoku) Keyboard Layout using ZMK with some inspiration from other keymaps found on [KeymapDB](https://keymapdb.com/).

Miryoku was the first layout I used when I built my wireless keyboard and had been accustomed to how it works.
You can find my Miryoku ZMK Config [here](https://github.com/duanexavierbondad/miryoku_zmk_xavien).

This firmware uses 12 layers in total, 2 of which are dedicated to a Gaming Layer. It also utilizes home row mods and combos for easy access to symbols on the base/default layer. This layout utilizes the left hand side of the keyboard more that the right side to be able to maximize the use of shortcuts event when using the mouse.

The default alpha layer is using Colemak-DH which also contains combo keys for symbols.
The other layers are the following:
- NUM Layer for the dedicated numbers and operators.
- NAV Layer for the arrow keys and mouse emulation.
- SYM Layer for the various symbols in the keyboard.
- FUN Layer for the Function Keys
- MED Layer for the Media Control Key
- SCN Layer for the SCREEN Controls
- Gaming Layer dedicated for Valorant with Two Layers, VAL and VALTWO layers.
- EXTRA Layer for the QWERTY Layout.
- TAP Layer for a Colemak-DH Layout without combos and homerow mods.
- SYS Layer for dedicated settings for the keyboard.

`SYS` layer is implemented as a tri-layer, i.e. it is active when both `SCREEN` and `FUN` are active.

OS-dependent shortcuts are present on the `SCN` layer, e.g. for Windows:
- `Win Close`: <kbd>Alt</kbd><kbd>F4</kbdy>
- `Tab Close`: <kbd>Ctrl</kbd><kbd>F4</kbd>
- `Win Close`: <kbd>Ctrl</kbd><kbd>Gui</kbd><kbd>F4</kbd>
The close shortcuts uses combo keys to prevent accidental keypresses.
- `Tab Next`: <kbd>Ctrl</kbd><kbd>Tab</kbd>
- `Tab Prev`: <kbd>Ctrl</kbd><kbd>Shift</kbd><kbd>Tab</kbd>
- `Desk Next`: <kbd>Ctrl</kbd><kbd>Gui</kbd><kbd>Right</kbd>
- `Desk Prev`: <kbd>Ctrl</kbd><kbd>Gui</kbd><kbd>Left</kbd>
- `Win Next`: <kbd>Alt</kbd><kbd>Tab</kbd> (hold Alt while layer active) using zmkfirmware/zmk#1366
- `Win Prev`: <kbd>Alt</kbd><kbd>Shift</kbd><kbd>Tab</kbd> (hold Alt while layer active)

I also used caksoylar's [`keymap-drawer`](https://github.com/caksoylar/keymap-drawer) to generate the representation below:

![Keymap Representation](./keymap-drawer/xavien.svg?raw=true "Keymap Representation")


Keymaps for QMK Firmware under development.

Will experiment for equivalent keymap definitions for QMK.


## ZMK customizations

A custom [ZMK branch](https://github.com/caksoylar/zmk) referenced in [west.yml](config/west.yml) was used.
This was done to enable the following:
- [mouse emulation](https://github.com/caksoylar/zmk/tree/caksoylar/experimental)
- [swapper behavior](https://github.com/zmkfirmware/zmk/pull/1366) 
