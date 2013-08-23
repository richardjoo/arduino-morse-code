arduino-morse-code
==================

###### Morse Code project for Arduino

I am still working on the documentation. I will add pictures and diagrams soon. But it is basically the same diagram as the arduino starter tool kit tutorials 100-104.pdf file page 11.



This is simple LED blinking light project for arduino for beginners just like me.
Code is simple too.  I will have few different styles.

* Basic
    * It is absolutely basic format and very easy to read.
    * I did this way so people who have no idea on C language can understand.
* Enhanced
    * I moved morse code related section to morsecode.h header file.
* Advanced
	* added a new function ````void stringToMorseCode(char arg[])```` to read the string of letters and numbers and convert into morse code
    * it accepts the string and convert.


## INSTRUCTION
1. Buy arduino starter kit
    * I bought this one. [starter kit](http://www.sainsmart.com/starter-kit/uno-r3-starter-kit/sainsmart-uno-r3-starter-kit-with-16-basic-arduino-projects.html)
2. Install Arduino IDE
    * [Download and install from this site](http://arduino.cc/en/main/software)
    * And install the software.
    * When you run the software, it should look something like this [arduino-morse-code-001.jpg][1]
3. Download tutorial file
    * [Click this link to download the file](http://www.sainsmart.com/zen/documents/20-013-100-104/SainSmart_Stater_Kit_Tutorals_100-104.rar)
4. Make sure your computer can talk to arduino
    * connect your arduino to your computer without any other things attached
    * try to follow chapter 1 and 2
    * When you try to upload the example code for the first time, it will ask you which serial port you want to use.
        * I had good luck with tty.usbmodemfa131 with Mac
5. Assemble LED blinking kit
    * The diagram and items weren't exactly identical to what I got. So, I took some pictures of mine.
        * [pic 1][4]
            * <img src="/pictures/arduino-morse-code-004.jpg" alt="pic 1" style="width: 150px;"/>
        * [pic 2][5]
            * <img src="/pictures/arduino-morse-code-005.jpg" alt="pic 2" style="width: 150px;"/>
        * [pic 3][6]
            * <img src="/pictures/arduino-morse-code-006.jpg" alt="pic 3" style="width: 150px;"/>
        * [pic 4][7]
            * <img src="/pictures/arduino-morse-code-007.jpg" alt="pic 4" style="width: 150px;"/>
        * [pic 5][8]
            * <img src="/pictures/arduino-morse-code-008.jpg" alt="pic 5" style="width: 150px;"/>
    * If it is the same tutorial file, then the file name should be Arduino Stater Kit Tutorals 100-104 and diagram can be found on page 11. And here is the screen shot of it. [arduino-morse-code-002.jpg][2]
6. Open morsecode.ino from one of these three folders (basic, enhanced, and advanced)
    * it should be looking like this [arduino-morse-code-003.jpg][3]
7. Verify to make sure code compiles without any errors.
8. Upload
9. Enjoy!


[1]: https://github.com/richardjoo/arduino-morse-code/blob/master/pictures/arduino-morse-code-001.jpg
[2]: https://github.com/richardjoo/arduino-morse-code/blob/master/pictures/arduino-morse-code-002.jpg
[3]: https://github.com/richardjoo/arduino-morse-code/blob/master/pictures/arduino-morse-code-003.jpg
[4]: https://github.com/richardjoo/arduino-morse-code/blob/master/pictures/arduino-morse-code-004.jpg
[5]: https://github.com/richardjoo/arduino-morse-code/blob/master/pictures/arduino-morse-code-005.jpg
[6]: https://github.com/richardjoo/arduino-morse-code/blob/master/pictures/arduino-morse-code-006.jpg
[7]: https://github.com/richardjoo/arduino-morse-code/blob/master/pictures/arduino-morse-code-007.jpg
[8]: https://github.com/richardjoo/arduino-morse-code/blob/master/pictures/arduino-morse-code-008.jpg
