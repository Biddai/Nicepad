# Nicepad
The Nicepad is a remix of the Printedpad, which is a macropad that specializes in layering. There are 2 versions - a regular 6-keys and an XL with 9 keys.
![Front Pic regular+XL](https://github.com/user-attachments/assets/ceef3b90-f3c2-455b-a835-7047c871d377)

# BOM
To make the macropad you need:
7\10 MX-style switches
Raspberry Pi Zero
Mono OLED 0.96 inch
Wires and soldering equipment (I recommend 1mm bare copper wires and 30awg wires)
M2 Heatset inserts
M2 socket head screw

# Printing
The Nicepad is made to be easily printed with any Bambulab printers (makerworld link). Make sure to use supports only on the bed!

I recommend these [keycaps](https://makerworld.com/en/models/132469-xda-style-keycaps-blank?from=search#profileId-143606) as they are cute but any other mx style keycap should work.

# Assembly

We first want to check that everything fits - try to place the OLED in the slot in the frame, try to close the bottom and top of the frame and make sure they fit and try to insert switches into the plate and make sure they click in.

## The switches
Place the switches in the plate, making sure to use the correct size (the inserts for the screws should be the top).
Then, wire the switches. I opted for direct wiring, as they are simpler than a matrix and I figured that a matrix will result in more work overall.


## Wiring
I like to wire the ground together for all the switches and then direct wire to the Pi zero as follows:
![Wiring 1](https://github.com/user-attachments/assets/56a629cb-2872-45df-931f-6db20372db52)

Then simply wire to the pico according to this table:
Component| Pi PIN

After you finish wiring it should look something like this:
![Wiring 2](https://github.com/user-attachments/assets/97c3851c-45b3-4c85-8bdb-a2c4a3cf8655)

Here, plug it in the computer and upload the firmware (uf2 file). Check that vial.rocks work and check every switch. See that the oled is working properly.

## Final assembly
Screw in the plate to the top panel:
![Wiring Complete](https://github.com/user-attachments/assets/9b7bbf84-2a35-452d-af02-0f16ac675dcd)
I recommend hot-gluing the OLED in place, making sure there is no visible gap from the front.

Place the Pico Zero into the slot in the bottom and secure with a 3x2mm screw.
Now snap fit the top and bottom assembly and secure with 4 6x2mm screws.
Plug it in and check everything. You are ready to rock!

### Macros
I will not include a tutorial for vial.rocks. It is its own thing. I do recommend checking some AutoHotKey scripts, I used 

