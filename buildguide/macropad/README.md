
# 3x3 or 4x4 Macropad Keyboard Build Guide

Total cost is below 15$ (when using AliExpress bundle deals) and you will already have a lot of parts for the full build.

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

## Testing

## Assembly

## Firmware

## Post build
- switch choice
- vial migration
