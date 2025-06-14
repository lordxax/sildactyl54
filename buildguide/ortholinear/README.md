# 54 key Ortholinear Keyboard Build Guide

Total cost is around 40$.

# Bill of materials
- **54x** MX compatible key switches or 45 if you want to go super cheap
- **54x** Kailh Hotswap Sockets (e.g. 70 here https://a.aliexpress.com/_EI1RGyw for 5$)
- **54x** 1N4148 Diodes (e.g. 100 here https://a.aliexpress.com/_EuIykz4 for 1$)
- **54x** keycaps for one button (you can buy entire set for 4$ https://a.aliexpress.com/_EQTRqyi )
- **2x** RP2040 Zero (e.g. choose welded https://a.aliexpress.com/_EGZg0Cw 1.5$)
- wire (I already had it)
- heat shrink tubbing (the one I bought had a lot of big size tubbings that are not needed for this build)
- one of below
   - **2x** PJ320D audio sockets + **1x** TRRS audio cable ( TRRS is not the best idea as it introduced the risk to short your MCU )
   - 1x USB male to female cable (I used this one eventually as I forgot to order TRRS cable)
   - 1xUSB cable and 2 USB connectors
   - any 4 wire cable with connectors

### Thumb cluster
- I bought this: Outemu 3x3 switch tester https://a.aliexpress.com/_EwksYeI (the acrylic tester base of this one does not hold the switches well, so I recommend trying something else: e.g. two 1x3 or one 3x3 like these  https://a.aliexpress.com/_EySXVPy)

### Main keyboard 
- 2x switch tester base of 4x6 size (6$)
- 1x 4x4 akko with 16 switches (5$) https://a.aliexpress.com/_EQE2sG2
## Additional Tools
- something to glue acrylic (I've used hot glue pistol)

# Soldering 
perform the same steps as in macropad build with following differences:
- 6 columns instead of 4
- one more row for thumb cluster that is connected to 3 columns (closest to mcu)
   - the column wires should be longer to give more flexibility)
   - the row wire should also have a longer cable to mcu
- build the second side (it should be mirrored). The MCUs should be on the inner sides (facing each other)
 
if you have built the macropad, just add 2 more columns and one row and create second side. 

## Wiring to MCU
The wiring should be as follows

"cols": ["GP1", "GP2", "GP3", "GP4", "GP5", "GP6"],

"rows": ["GP8", "GP9", "GP10", "GP11", "GP12"]


Helpful image:
![prepared wire](../img/2_42_mcu.jpg)

> [!TIP]
> The mapping between pins and wires does not matter as long as you don't wire to some important pins
> 
> Don't wire to: GP0, GP1, 5v Gnd, 3v3
> 
> You are able to change the pin mapping in QMK (you will have to recomile the firmware though)

# Connecting MCUs
The MCUs should be connected as follows 
- GND to GND ( on the other side )
- 5v to 5v
- GP0 to GP1 from other side (transmitter to receiver)
- GP1 to GP0 from other side (receiver to transmitter)

Ideally add a cable in between (do not hardwire them). I've used usb male to female cable eventually. Remember to 'cross' tx to rx connection.
![finished micropad](../img/2_40_USB_Cable.jpg)
![finished micropad](../img/2_41_USB_Cable.jpg)
![finished micropad](../img/2_42_USB_Cable.jpg)


# Firmware
Flash the firmware to both MCUs (the same firmware). You will find a precompiled version [here](../../firmware/tbd.uf2) or compile it yourself (I highly recommend it) with QMK: [source](../../firmware/sildactyl54).

# Testing
You can simulate the key presses like that and test:
![finished micropad](../img/1_60_testing.jpg)
![finished micropad](../img/1_61_testing.jpg)

# Assembly 
## Attaching switches
Mount the switches in the acrylic tester base (actually you will already receive them attached). Using some pliers or tweezers attach the hotswap sockets to the switches. Install keycaps (just push them into the switch).
![finished ortho](../img/2_34.jpg)
![finished ortho](../img/2_37.jpg)


Note that my keycaps are flipped by 90 degrees (compared to how people usually mount them). It will not matter at this point, but you might be surprised when you compare it to other builds. [Here is why](../designDecisions/README.md)

## Thumb cluster
Cut 3x3 acrylic tester base into two halfs:
![finished ortho](../img/2_35.jpg)
![finished ortho](../img/2_36.jpg)

First find the perfect position of the thumb cluster. You can use double sided tape to hold it in place.
Experiment with the position of thumb cluster:
![finished ortho](../img/2_37.jpg)
![finished ortho](../img/2_38.jpg)
![finished ortho](../img/2_39.jpg)
![finished ortho](../img/2_40.jpg)
![finished ortho](../img/2_41.jpg)
![finished ortho](../img/2_42.jpg)
![finished ortho](../img/2_43.jpg)

Once you are happy with the place, glue it to the 6x4 tester base with hot glue (or any glue of your choice). 
Eventually add a case. You can get some inspiration from the dactyl build. You can use random pieces of plastic, plastic box or prepare a wooden case.

# Post build
- make sure that the keyboard works as expected
- visit vial.rocks website. experiment with layers, combos, tap dance, etc in vial
