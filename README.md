# Bento Macropad


![Bento](https://i.imgur.com/rzgvkcN.jpg)


The Bento Macropad is a 5-key macropad with rotary encoder designed by Dwin17 (Discord: **Dwin#3766**, Reddit: **nguyedt**) with PCB designed by coarse (keyboard.coarse.tech). 

**Key features include:**
- Powered by QMK Firmware
- EC11 Rotary Encoder
- RGB Underglow
________________________________________________________________________________________________________________________________________________________________

**FAQ**

* What is that metal case in the first image?
  - It is an aluminum case that I has machined by a friend of mine which I sanded and polished. I don't plan to have a group buy for it but feel free to use the models I've provided to make your own!
* Is this hotswap? 
  - No. However, the pro micro can be "hotswapped" due to the staggered pin design on the PCB. You can also install mill max sockets for the switches.
* Why won't ______ work? 
  - Please see my troubleshooting guide below.
* Do you sell kits?
  - Not currently. However, I have added the gerber files if you want to print some PCBs for personal use. Please contact me first if you plan to run a group buy. 
* Can I swap out the pro micro for something else like an Elite C?
  - Absolutely! You can also try using a different controller with similar footprint like the Proton C. You may be able to use the nice! Nano for bluetooth but there isn't much room in the case for a battery.


________________________________________________________________________________________________________________________________________________________________

**Flashing a new layout**

*Please do not use QMK Configurator to create firmware for the Bento. The Bento located on QMK Configurator is only for the handwired version and will not work*

Make example for this keyboard (after setting up your build environment):

    make bento:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with the [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).


[Video Guide for creating macropad firmware manually](https://www.youtube.com/watch?v=-HLV6mUxNnU&list=PLYEUsdlqPD2a3kzQgnF98Prj-4IzZJGYG)

[Video Guide to using QMK Toolbox to flash your macropad](https://www.youtube.com/watch?v=VR53Wo9Z960&t=1s)


**To put your Bento into bootloader mode, please turn it over and press the reset button located through the cutout on the bottom plate.**

________________________________________________________________________________________________________________________________________________________________

**Bill of Materials**

| Part | Quantity |
| --- | --- |
| Bento Macropad PCB | 1 |
| Bento Macropad Case | 1 [(model available on Thingiverse)](https://www.thingiverse.com/thing:4594580) |
| Pro Micro (or equivalent) | 1|
| EC11 Rotary Encoder | 1|
| Rotary Encoder Knob (for 6mm shaft) | 1|
| Reset Switch | 1|
| Strip of 3x WS2812B RGB LEDs| 1|
| Lead wire (for RGB underglow) | As required|
| Cherry MX-compatible switches | 5|
| Cherry MX-compatible keycaps | 5|

**Optional for LED lighting**

| Part | Quantity |
| --- | --- |
| Single color LED (2x3x4mm or 1.8mm)| 5|
| 330 Ohm Resistor | 6|
| 10k Ohm Resistor |1|
| MOSFET | 1| 
________________________________________________________________________________________________________________________________________________________________

[**Build Guide**](https://imgur.com/a/0jkQ31g)

NOTE: I now recommend soldering the pro micro headers to the PCB first. This would then be followed by the switches and then the pro micro itself. This is to prevent a possible issue with bent pins not properly contacting the PCB pins. This will remove the hotswap capability of the controller. Alternatively, you can continue building per the guide but be prepared to bend a few pins with pliers per the troubleshooting guide below. 

________________________________________________________________________________________________________________________________________________________________

**Troubleshooting Guide**

* *My Bento isn't registering ANY keypresses*
  - Please ensure that your micro-USB cable is plugged all the way in and you are using a working USB port
  - Try a different cable. Make sure your cable can transfer data. 
  - The controller may have gotten loose during transit. Please take off the bottom plate and push the Pro Micro controller into the PCB to ensure that it is fully inserted.

* *The keypresses work on some switches but not on others or my rotary encoder isn't working*
  - Please ensure that the Bento is flashed with the provided default firmware when testing for functionality. **DO NOT use QMK Configurator to create firmware for the Bento.** The Bento located on QMK Configurator is only for the handwired version and will not work for keypresses or the rotary encoder. Please refer to this [Video Guide for creating macropad firmware manually.](https://www.youtube.com/watch?v=-HLV6mUxNnU&list=PLYEUsdlqPD2a3kzQgnF98Prj-4IzZJGYG).
 
  **If you cannot build your own firmware, please contact me with a screenshot of your desired keymap and I can make the firmware for you.**

  - One of the Pro Micro's pins may not be properly contacting the PCB socket. Normally a soldered controller wouldn't exhibit this issue but since the pro micro is "hotswapped", the pins may be slightly misaligned. [To fix this, please take off the bottom plate, pull out the pro micro, and flip it over to the side where the pins meet the PCB. You'll want to bend the pins of the non-working switch(es) ever so slightly to make sure it contacts the PCB socket. You'll want to use some tiny pliers or tweezers. Then push it back in making sure you didn't bend any other pins. It should work again!](https://imgur.com/a/t0O9hgD)
  
 Pin Configuration: 
 
![Pins](https://i.imgur.com/SEvQf43.png)
 
 Example: If your bottom right key is not working, bend Pin 14 on the Pro Micro. 

* *I can't flash the Bento on QMK Toolbox*
  - If you're seeing an error message along the lines of "*option requires an argument -- P*", please restart your computer and try flashing again.
  - If it states that *No Device is Available*, please try my flashing method:
    - Open QMK Toolbox and select your Bento firmware ("Keyboard for qmk.fm" can be left blank)
    - Check "Auto-Flash"
    - Press the Reset button on the bottom of the Bento twice quickly - but on the second press, hold it down for 3 seconds before letting go. 
    - After a few seconds, the Pro Micro should go into bootloader mode and automatically flash the firmware
    - If this is not the case, repeat the previous steps. It may be helpful to unplug/replug the Bento and exit/reopen QMK Toolbox. Caution: It may take several tries to work due to the finicky nature of Pro Micro clones.
   - If it states that *Access is Denied* please try the method stated in the previous bullet point. Again, it may take several tries to work.
   
* *The RGB lights aren't working*
  - Ensure that you have not turned it off on accident via a keypress.
  - Make sure the Pro Micro is fully inserted by taking off the bottom plate and pushing the Pro Micro into the PCB. 
  - The wiring for the lights may be damaged. Please contact me for further help.
  - There may be a bent pin. Please see the instructions for fixing bent pins above. Possible pins you may need to bend back are GND (ground), VCC (power), or TX0 (data). 
________________________________________________________________________________________________________________________________________________________________

**NOTE:** If you have received a built Bento Macropad from me, it will be flashed with this layout by default: 

![Layout](https://i.imgur.com/exSeW4t.png)
