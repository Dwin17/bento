# Bento Macropad Milkshake Edition with VIA


![Bento](https://i.imgur.com/csn46mNl.jpg)


The Bento Macropad is a 5-key macropad with rotary encoder designed by Dwin17 (Discord: **Dwin#3766**, Reddit: **nguyedt**) with PCB designed by coarse (keyboard.coarse.tech). 

**Key features include:**
- Powered by QMK Firmware
- EC11 Rotary Encoder
- RGB Underglow
- VIA support (added by c0qu1)
- Pro Micro microcontroller was upgraded with qmk-dfu bootloader to avoid opening the Bento to press reset, just have to unplugged USB, hold the upper left key and plug it to PC. If your Pro-Micro has the default Caterina bootloader the change is very simple in the rules.mk file, you can also download a precompiled firmware for the Caterina bootloader.
________________________________________________________________________________________________________________________________________________________________

**FAQ**

* Can you post a compiled firmware?
  - https://github.com/c0qu1/bento/releases
* Is this project original from c0qu1?
  - No. You can find the forked project here: https://github.com/Dwin17/bento
  - Also would like to credit @mttpsck on GitHub for the content of the 4 layers
* Is the VIA support working perfectly?
  - Almost, the rotary encoder is not supported by VIA. The firmware provides support for the rotary encoder that works while also supporting VIA on the 4 contiguous keys, and the rotary encoder built in button. The 5th key is used to cycle through all the layers and this is not supported by VIA since it is a custom function in QMK. The layer switching key was removed from the VIA layout to prevent an accidental modification of it.
* Why won't ______ work? 
  - Please see the troubleshooting guide on the original project, see above.
* VIA won't recognize my Bento, why?
  - You must import the keymaps/via/bento.json file into VIA everytime you open VIA, until the Bento Macropad is officially added to VIA this will be required.

________________________________________________________________________________________________________________________________________________________________

**Flashing a new layout**

*Please do not use QMK Configurator to create firmware for the Bento. The Bento located on QMK Configurator is only for the handwired version and will not work*

Make example for this keyboard (after setting up your build environment):

    make bento:via

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with the [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).


[Video Guide for creating macropad firmware manually](https://www.youtube.com/watch?v=-HLV6mUxNnU&list=PLYEUsdlqPD2a3kzQgnF98Prj-4IzZJGYG)

[Video Guide to using QMK Toolbox to flash your macropad](https://www.youtube.com/watch?v=VR53Wo9Z960&t=1s)


**To put your Bento into bootloader mode, please turn it over and press the reset button located through the cutout on the bottom plate.**

________________________________________________________________________________________________________________________________________________________________

**NOTE:** If you have flashed your Bento Macropad using this compiled firmware, it will have this layout by default: 


    /* _MEDIA Layer
        |                  |                    |  Knob : Vol Up/Dn |
        |      Mail        |         Play       |    Press: Mute    |
        |      Prev        |         Next       |  Cycle Layers     |
     */

    /* _BROWSER Layer
        |                  |                     |  Knob : Desktops  |
        |       Back       |   Fwd               |    Press: Stop    |
        |     PrevTab      | NextTab             |   Cycle Layers    |
     */

    /* _MACRO Layer
        |               |                        |  Knob : Windows    |
        | Slack Status  |    Zoom Toggle Mute    | Transparent        |
        |  WinScrnSht   |        Task View       |  Cycle Layers      |
     */

    /* _RGBLIGHTS Layer
        |               |                        | Knob : Saturation Up/Dn |
        | RGB MOD Cycle |   Right Shift          |     Toggle RGB          |
        |    Hue Cycle  |   Increase Brightness  |  Cycle Layers           |
     */
