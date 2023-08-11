# Glowing Pumpkin Xiao 5x5 BFF

Years ago I published a several Glowing Pumpkin projects: [Arduino Glowing Pumpkin](https://github.com/johnwargo/glowing-pumpkin-trinket-neopixel) and [Arduino Glowing Pumpkin (Adafruit Feather)](https://github.com/johnwargo/glowing-pumpkin-feather). Each of these projects. Both of them used Arduino compatible devices plus either one of the Adafruit multi-NeoPixel devices or a NeoPixel shield.  

The shield approach was easy because I just had to solder some male and female headers to the boards and press them together into a unit. My first project used the NeoPixel Ring which required soldering wires and running them into an enclosure where the Arduino device resides. 

I always wanted to redo this project, especially using some of the smaller ESP32 devices like the [Seeed Studio Xaio](https://www.seeedstudio.com/xiao-series-page) series of microcontrollers. A while back I was perusing the Adafruit site looking for new products when I noticed the [Adafruit 5x5 NeoPixel Grid BFF Add-On for QT Py and Xiao](https://www.adafruit.com/product/5646); it's a super tiny device, designed to attach back to back with a Seeed Xiao board. This combination gives me an opportunity to do a super small reboot of the glowing pumpkin.



Seeed Studio Xiao with Adafruit 5x5 BFF version of my Glowing Pumpkin project.

With this version, the LEDs are self-contained and I'm going to use a different library to make them fade correctly.
