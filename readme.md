# Quantum Mechanical Keyboard Firmware

[![Current Version](https://img.shields.io/github/tag/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/tags)
[![Discord](https://img.shields.io/discord/440868230475677696.svg)](https://discord.gg/Uq7gcHh)
[![Docs Status](https://img.shields.io/badge/docs-ready-orange.svg)](https://docs.qmk.fm)
[![GitHub contributors](https://img.shields.io/github/contributors/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/pulse/monthly)
[![GitHub forks](https://img.shields.io/github/forks/qmk/qmk_firmware.svg?style=social&label=Fork)](https://github.com/qmk/qmk_firmware/)

This is a keyboard firmware based on the [tmk\_keyboard firmware](https://github.com/tmk/tmk_keyboard) with some useful features for Atmel AVR and ARM controllers, and more specifically, the [OLKB product line](https://olkb.com), the [ErgoDox EZ](https://ergodox-ez.com) keyboard, and the Clueboard product line.

## Documentation

* [See the official documentation on docs.qmk.fm](https://docs.qmk.fm)

The docs are powered by [Docsify](https://docsify.js.org/) and hosted on [GitHub](/docs/). They are also viewable offline; see [Previewing the Documentation](https://docs.qmk.fm/#/contributing?id=previewing-the-documentation) for more details.

You can request changes by making a fork and opening a [pull request](https://github.com/qmk/qmk_firmware/pulls), or by clicking the "Edit this page" link at the bottom of any page.

## Supported Keyboards

* [Planck](/keyboards/planck/)
* [Preonic](/keyboards/preonic/)
* [ErgoDox EZ](/keyboards/ergodox_ez/)
* [Clueboard](/keyboards/clueboard/)
* [Cluepad](/keyboards/clueboard/17/)
* [Atreus](/keyboards/atreus/)

The project also includes community support for [lots of other keyboards](/keyboards/).

## Maintainers

QMK is developed and maintained by Jack Humbert of OLKB with contributions from the community, and of course, [Hasu](https://github.com/tmk). The OLKB product firmwares are maintained by [Jack Humbert](https://github.com/jackhumbert), the Ergodox EZ by [ZSA Technology Labs](https://github.com/zsa), the Clueboard by [Zach White](https://github.com/skullydazed), and the Atreus by [Phil Hagelberg](https://github.com/technomancy).

## Official Website

[qmk.fm](https://qmk.fm) is the official website of QMK, where you can find links to this page, the documentation, and the keyboards supported by QMK.

# My firmware for CRKBDv3

A custom firmware written for the [Corne keyboard](https://github.com/foostan/crkbd/) (a DIY ergonomic &
ortholinear keyboard), and based on [QMK](https://github.com/qmk/qmk_firmware/).


## Layout

[![Keyboard layout per layer](./layout.svg)](./keymap.c)

**NOTES:**

 * *There are 2 “modes” available, `Typing` and `Gaming`; the former comprised of the first 3 layers, while the
    latter corresponds to the last 2.*
   * *The Typing mode is intended for general purpose use, though might be a bit inclined towards coding.*
   * *The Gaming mode focuses heavily in taking advantage of its split nature. This allows it to use the left
      side independently, leaving more room for mouse movement; while also allowing to use both halves in
      keyboard focused titles.*
   * *Even though the keyboard has no indicators to show on which mode its in, you can easily make sure that you
      are in the desired one by pressing either both the innermost thumb keys or the middle thumb keys (the first
      for getting into typing mode, the second to get into gaming mode). Keep in mind that the left key should be
      pressed before the right one (at least to get out of gaming mode).*
 * *Keys labelled L0 — L4 are for switching layers. Keys that change from one “mode” to the other are one way,
    while the rest are only active when held.*
 * *The `GUI` key is also called either Windows, Command, or Super key, depending on the system.*
 * *`Backspace/Delete` key changes behaviour when shift is pressed. Similarly for `Backspace/Esc` and the control
    key.*
 * *The `Space/L1` and `Enter/L2` work so that if the keys are only tapped then the first value in inputted, but
    when held then they momentarily activate the assigned layer as long as they remain pressed.*
* *The PC needs to be set up to use en-US keyboard layout, otherwise it will not work as expected.*


## How to …

### Build the keyboard

First, you'll need to acquire the base components for the build. The board schematics are all openly available @
[GitHub](https://github.com/foostan/crkbd/), so you can try and get your own PCBs made wherever you want, but I
bought mine from [Keyhive](https://keyhive.xyz/corne) in a nice kit containing most of the basics. To that I had
to add in the MCUs, a TRRS cable, 42 key switches and keycaps, and a USB-A to USB-C cable.

Once you have everything you just have to put it all together. It is intuitive enough, but there is also a
[handy-dandy build guide](https://github.com/foostan/crkbd/blob/master/corne-cherry/doc/v3/buildguide_en.md) that
you can follow if needed.

### Put the firmware onto the keyboard

This depends on your system, so I'll reference the [official guide](https://docs.qmk.fm/#/newbs) on this one.

You'll notice though that this is not inside the QMK repo itself, as the guide indicates. That's because I wanted
to keep my own separate repo to keep things simpler (at least, from a certain point of view). To actually be able
to use this keymap you'll need to copy the entire contents of this repo onto a folder inside the keyboard's
[keymaps folder](https://github.com/qmk/qmk_firmware/tree/master/keyboards/crkbd/keymaps/). Then you can follow
the guide without problem.

I've also included a set of scripts in the shape of a [Nix shell](./shell.nix), which will fetch all dependencies
automagically. This allows to easily manage the unconventional setup under nearly any Linux system.


## TODOs

 * Don't restart when splitting apart (or at least don't lose the state).
 * Custom lighting depending on current layer.
   * Not doable just yet it seems. See [#6277](https://github.com/qmk/qmk_firmware/issues/6277) &
     [#8789](https://github.com/qmk/qmk_firmware/issues/8789).


## Licences

All the contents of this repo are distributed under the [GPLv3](./LICENSE), except the font
[Victor Mono](https://rubjo.github.io/victor-mono/) used for the image for the layout of the keyboard, which is
distributed under the [MIT licence](https://github.com/rubjo/victor-mono/blob/master/LICENSE). The board itself
is also released under the [MIT licence](https://github.com/foostan/crkbd/blob/main/LICENSE), and QMK is under
[GPLv2](https://github.com/qmk/qmk_firmware/blob/master/LICENSE).
