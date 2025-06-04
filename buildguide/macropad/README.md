
# 3x3 or 4x4 Macropad Keyboard Build Guide

Total cost is below 15$ (actually probably less than 10$ if you consider only 16 pieces of everyting) and you will already have a lot of parts for the full build.

The entire result from this guide can be reused/extended into a full keyboard (of any size). I recommend to go with the same size as our tester is. The firmware is for 4x4 but it will work with 3x3 as well.

The end product is not a finished/ready-to-use keyboard. It is missing a bottom case. I've never intended to actually use it, but it should be fairly easy to add it. 

## Bill of materials
links to most of them can be foind here https://github.com/nmunnich/apiaster/blob/main/docs/mx-ordering-guide/mx-zero.md  
- **1x** 3x3 or 4x4 MX switch tester (e.g. https://a.aliexpress.com/_Ey9GKVk for 5$)
- **16x** Kailh Hotswap Sockets (it is better to buy 54+ from the start: e.g. 70 here https://a.aliexpress.com/_EI1RGyw for 5$)
- **16x** 1N4148 Diodes (again buy 54+ e.g. 100 here https://a.aliexpress.com/_EuIykz4 for 1$)
- **16x** keycaps (you can buy entire set for 4$ https://a.aliexpress.com/_EQTRqyi )
- **1x** RP2040 Zero (e.g. choose welded https://a.aliexpress.com/_EGZg0Cw 1.5$)
- wire (I already had it)
- heat shrink tubbing (the one I bought had a lot of big size tubbings that are not needed for this build)

## Soldering
### 1. Prepare the wires
Prepare 4 wires for the rows (in my case dark wires: green + brown or blue + red) and 4 wires for the columns (light ones: white + yellow). Each of them should have the protection/cover/insulation removed. The pieces should be separated from each other by approximatelly 3-4 cm. The length of each stripped wire should be ~3-5mm. Ideally leave some spare wire on each side. Leave at least 3-5 cm on each side.

![prepared wire](../img/1_10_wire.jpg)

If you plan to extend this build leave:
- 3.5cm on bottom side of columns (three columns on the MCU side can be longer ~10cm - to solder to the thumb cluster)
- 10-15cm on top side of columns (for soldering to the MCU)
- 10-15cm on each side of the row (one side to solder to MCU, other side to extend with more rows)
If you didn't leave any spare wire, that is not an issue. You will still be able to solder more wire.

### 2. Columns

First cut at least 1/3 of the wire from each diode side. Then bend it in half. Attach it to the hotswap socket. They should remain attached to each other without soldering. It will make soldering easier and the end product stronger (potentially).
![prepared wire](../img/1_19_columns.jpg)

Then solder that. You can use coloured heatshrink pipes to match the diode colors.
![prepared wire](../img/1_20_columns.jpg)
![prepared wire](../img/1_21_columns.jpg)

Put the black heatshrink pipe on the diode, then solder that to the wire. Then slide the heatshring pipe and use some high temperature.
![prepared wire](../img/1_22_columns.jpg)
![prepared wire](../img/1_23_columns.jpg)
![prepared wire](../img/1_24_columns.jpg)
![prepared wire](../img/1_25_columns.jpg)

Finished columns should look like this:
![prepared wire](../img/1_26_columns.jpg)

### Rows
Get a darker wire for the rows
![prepared wire](../img/1_30_rows.jpg)

Then attach the other side of the hotswap sockets to these wires like that.
![prepared wire](../img/1_29_rows.jpg)

Finally it should look like that:
![prepared wire](../img/1_31_rows.jpg)

### Wiring to MCU
The wiring should be as follows
"cols": ["GP3", "GP4", "GP5", "GP6"],
"rows": ["GP8", "GP9", "GP10", "GP11"]

The layout will be:
        KC_1, KC_2, KC_3, KC_4,
        KC_5, KC_6, KC_7, KC_8,
        KC_A, KC_B, KC_C, KC_D,
        KC_E, KC_F, KC_G, KC_H

Helpful image:
![prepared wire](../img/1_41_mcu.jpg)

> [!TIP]
> The mapping between pins and wires does not matter as long as you don't wire to some important pins
> For simplicity: don't wire to: GP0, GP1, 5v Gnd, 3v3
> You are able to change the pin mapping in QMK (you will have to recomile the firmware though)

## Firmware
Flash the firmware to the MCU. You will find a precompiled version [here](../../firmware/nibell_micropad4x4_default.uf2) or compile it yourself (I highly recommend it) with QMK: [source](../../firmware/macropad4x4).

### Testing
You can simulate the key presses like that and test
![finished micropad](../img/1_60_testing.jpg)
![finished micropad](../img/1_61_testing.jpg)

### Attaching to switches
Mount the switches in the acrylic tester base (actually you will already receive them attached). Using some pliers or tweezers attach the hotswap sockets to the switches. Install keycaps (just push them into the switch)

Finished product should look like this (the keycaps don't match the actual keys).
![finished micropad](../img/1_50_finished.jpg)
![finished micropad](../img/1_51_finished.jpg)

Note that my keycaps are flipped by 90 degrees (compared to how people usually mount them). It will not matter at this point, but you might be surprised when you compare it to other builds. [Here is why](../designDecisions/README.md)

## Post build
- make sure that the keyboard works as expected
- switch choice - choose the switch that you like the most
- vial migration - you can try to migrate the config to vial (I didn't intend to use that macropad, so I've never done that)
- experiment with layers, compos, tap dance, etc in vial
