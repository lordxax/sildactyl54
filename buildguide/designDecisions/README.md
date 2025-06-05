# Why silakka54
- I already own silakka54. By creating another silakka54 it is easiest for me to share the keymap between them
- silakka54 has open source firmware
- silakka54 is based on two rp2040-zero MCUs
- 54 keys is in my opinion a perfect starting point for someone new in split keyboard world

# Why the switches are rotated 90 degrees 
The only reason is that the akko switch tester base that I've ordered had a big gap between rows 2 and 3. I've made a cut in that row and reused each piece for 2 columns (4 rows each).

From QMK perspective this is only changing:
- from diode_direction": "COL2ROW"
- to: diode_direction": "ROW2COL"

if you do not do the same as I did and solder to the same pins as in silakka54, you might be able to reuse silakka54 firmware as-is.

This is how original silakka54 should be wired:
cols": ["GP7", "GP8", "GP9", "GP10", "GP11", "GP12"],
"rows": ["GP2", "GP3", "GP4", "GP5","GP6"]
   

# Why not 1x4 switch tester base 
the outer borders of switch testers are too thick. They cannot be used for columns on the same level (not on top of each other) or the horizontal space between the keys would be too big.
