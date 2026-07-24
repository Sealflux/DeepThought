# DeepThought
A pocket keychain that displays DeepSeek quotes on an OLED at the push of a button. 
Powered by a Seeed XIAO ESP32-C3

## Features
- Press button to cycle through DeepSeek quotes
- 128x64 OLED Display
- Compact keychain(slay!!)
- Rechargable LiPo Battery

## Hardware
- Seeed Xiao ESP32-C3
- SSD1306 128x64 OLED (I2C)
- Tactile Push Button
- 250mAh LiPo Battery
- 3D-printed case

## BOM
| Part | Quantity | Cost | Link
|------|-----|------|------|
| Seeed Xiao ESP32-C3 | 1 | $6.35 | https://www.seeedstudio.com/Seeed-XIAO-ESP32C3-p-5431.html |
| SSD1306 0.96" OLED | 1 | $2.24 | https://www.lcsc.com/product-detail/C5248080.html |
| Tactile Push Button | 50 | $0.56 | https://www.lcsc.com/product-detail/C2888493.html |
| LiPo 250mAh | 1 | $9.95 | https://www.amazon.com/EEMB-Battery-Rechargeable-Lithium-Connector/dp/B08FD3V6TF |
| PCB Board | 5 | $2.10 | https://www.jlcpcb.com | 
| Shipping | 1 | $52.39 | $6.20(Seeed) + $11.33(LCSC) + $6.99(Amazon) + $27.87(JLCPCB) |

## Steps To Reproduce

1. Order PCB from JLCPCB, uploading the gerbers.zip in the production folder.
2. 3D print the case using the Bottom and Top stl in the production folder.
3. Order parts using the BOM links above.
4. Solder the parts from the BOM links above to the PCB.
5. Connect the LiPo battery to the battery pads of the PCB(its at the top)
6. Flash the firmware using Arduino IDE in the firmware folder.
7. Assemble the case using super glue, sand down the edges first for better connection.
8. Use Deepthought by pressing the button!


## Firmware/Programming
### Steps to connect/use replicate/mirror the official Seeed website: https://wiki.seeedstudio.com XIAO_ESP32C3_Getting_Started/

1. Connect XIAO ESP32C3 to your computer via a USB Type-C cable.
2. Donwload and Install Arduino IDE
3. Add ESP32 board package to your Arduino IDE
4. Intall Adafruit SSD1306 and Adafruit GFX libraries
5. Download the code from the firmware folder and open it or copy and paste it into the IDE!
5. Select the board
6. Upload the code

## Schematic
![image](https://cdn.hackclub.com/019f7c6e-dfbe-7b96-b878-44bbb1b746e5/paste-1784499068367.png)
## PCB
![image](https://cdn.hackclub.com/019f7c6e-845d-7ffd-8bad-6939e30087b6/paste-1784499044930.png)

## PCBA
![image](https://cdn.hackclub.com/019f7c6e-085f-72d9-82d4-1823204198e5/paste-1784499012933.png)

## Case
![image](https://cdn.hackclub.com/019f7c6d-a8cb-70ab-81e2-035a51cfacd5/paste-1784498988637.png)

## Photos of real thing if I actually can afford grant from horizons(probably not, please polaris!)

## Demo Video
