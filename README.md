I will draw and upload a circuit diagram soon.

I used a cheap 4-channel remote that I bought from aliexpress. You need to find one with a 5V receiver with 4 seperate Outputs, one for each button.
The receiver needs to be connected to IO-pins labeled B5, B4, D7 and D6. In Arduino IDE they are called 11, 12, 13 and 14.
Optional you can connect 4 buttons to IO-pins B0 - B3. They will do the same as the remote control buttons. They need to be normally open and their other side is connected to gnd.
The pressed butten can be visualized with a RGB LED connected to IO pins B7, C0 and D6. In Arduino IDE they are called 4, 5 and 9. The LED will light up for half a second after a key is pressed.

Remember to set the teensy to keyboard in the tools menu of Arduino IDE. And you need to install teensyduino to make this available.

If you don't change the code to make it fit to your needs, it will send Ctrl+1, Ctrl+2, Ctrl+3 and Ctrl+4. This is for switching the video input of an Atem Mini. 
