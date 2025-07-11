# Nicepad
The Nicepad is a remix of the [Printed Pad](https://protadesigns.com/products/printed-pad), which is a macropad that specializes in layering. There are 2 versions - a regular 6-keys and an XL with 9 keys.
The main goal for the Nicepad is having a complete, open-source, hand-wired macropad that everyone can make and customize as they wish.

<img src="https://github.com/user-attachments/assets/ceef3b90-f3c2-455b-a835-7047c871d377" width=50%>

# BOM
| Component                     | Quantity     | Links                 |
|-------------------------------|-------------:|-----------------------|
| MX-style switches             | 7–10         |     [Aliexpress](https://www.aliexpress.com/item/1005006425450443.html)                  |
| Raspberry Pi Pico Zero             | 1            |[Aliexpress](http://aliexpress.com/item/1005007393402333.html)                        |
| Mono OLED 0.96″ I²C display   | 1            |[Aliexpress](https://www.aliexpress.com/item/1005006117094887.html)                        |
| 1.2 mm bare copper wire         | as needed    |[Aliexpress](https://www.aliexpress.com/item/1005006608203341.html)                        |
|Wires            | as needed   |[Aliexpress](https://www.aliexpress.com/item/32742543692.html)                        |
| Soldering iron & accessories  |         |    I can recommend the [Pinecil](https://pine64.com/product/pinecil-smart-mini-portable-soldering-iron/) |
| M2 heat-set inserts           | 4 for the XL, 7 for the regular |[Aliexpress](https://www.aliexpress.com/item/1005006472781064.html)      |
| M2 socket-head screws         | 1 3mm, 4 5mm, 4 6mm         |[Aliexpress](https://www.aliexpress.com/item/33022099174.html)                        |
| 8x2mm Rubber Feet| 4| [Aliexpress](https://www.aliexpress.com/item/1005007040878644.html)|

# Printing
The Nicepad is made to be easily printed with any Bambulab printers (makerworld link TBD). Make sure to use supports only on the bed!

I recommend these [keycaps](https://makerworld.com/en/models/132469-xda-style-keycaps-blank?from=search#profileId-143606) as they are cute but any other mx style keycap should work.

# Assembly

We first want to check that everything fits - try to place the OLED in the slot in the frame, try to close the bottom and top of the frame and make sure they fit and try to insert switches into the plate and make sure they click in.

## The switches
Place the switches in the plate, making sure to use the correct size (the inserts for the screws should be the top).
Then, wire the switches. I opted for direct wiring, as they are simpler than a matrix and I figured that a matrix will result in more work overall.

## Heatset inserts
I opted for different type of mounting between the regular and the XL. The XL require less because I wanted to try that out (it is like that in the original Printed Pad)

## Wiring
I like to wire the ground together for all the switches and then direct wire to the Pi zero as follows:

<img src="https://github.com/user-attachments/assets/56a629cb-2872-45df-931f-6db20372db52" width=50% height=50%>

Then simply wire to the pico according to this table:
| Component   | Pi PIN |
| ----------- | ------------ | 
| OLED GND       |    GND      |
| OLED VCC       |       3.3V   |
| OLED SC|GP3|
| OLED SDA|GP2|
| Switch 1 to 9 |  GP7 to GP15 |
| Switch 10       |     GP26     |

For the Regular version:
| Component   | Pi PIN |
| ----------- | ------------ | 
| OLED GND       |    GND      |
| OLED VCC       |       3.3V   |
| OLED SC        |GP3|
| OLED SDA       |GP2|
| Switch 1 to 7     |  GP8 to GP14 |


After you finish wiring it should look something like this:

<img src="https://github.com/user-attachments/assets/97c3851c-45b3-4c85-8bdb-a2c4a3cf8655" width=50% height=50%>

Here, plug it in the computer and upload the firmware (uf2 file). Check that vial.rocks work and check every switch. See that the oled is working properly.

## Final assembly
Screw in the plate to the top panel:

<img src="https://github.com/user-attachments/assets/9b7bbf84-2a35-452d-af02-0f16ac675dcd" width=50% height=50%>

I recommend hot-gluing the OLED in place, making sure there is no visible gap from the front.

Place the Pico Zero into the slot in the bottom and secure with a 3x2mm screw.
Now snap fit the top and bottom assembly and secure with 4 6x2mm screws.
Plug it in and check everything. You are ready to rock!

### Macros
I will not include a tutorial for vial.rocks. It is its own thing. I do recommend checking some AutoHotKey scripts, I used 

