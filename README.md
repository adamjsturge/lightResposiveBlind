Automatic Closing Blinds

Abstract
This report will explain how to build a device to turn window blinds using the SJSUOne board A diagram of the circuit and of the process will be included. 

I.	Introduction 

For our project, we decided to create a device to turn window blinds for us. For this, we used the SJOne board and connected it to a breadboard using the GPIO pins. The pins help in allowing current to flow and connect the 2 boards. When the SJOne board is exposed to light, it turns on, when the light sensor is covered, the program does not start.  

II. Design Methodology

We used pin 20 on the SJOne Board to connect the board to the breadboard from the Gate side of the transistor. The Source had a 2 way connection to the ground on the board and the battery from the negative end. For this project, we used a 3V battery and a 3V motor. The positive end of the battery was connected to the motor which was then connected to the Drain of the transistor. 

The button on the SJOne board allowed us to have the user interact with the program and choose what they want from the program: pause, turn, or stop. The program starts button 0 is pressed. After that, it goes into the Morning stage where if the light value is below 14, the program goes to the Close case and the blinds close, and if below 14, the program returns back to the Morning case. After that, from either case, when button 1 is pressed, the program pauses. You have to press button 1 again to turn it back on and button 0 to return it to the initial, Idle, case. Appendix B and 
either MORNING or CLOSE
        9) All the state’s are also displayed on the
            Computer Terminal and the LED on the
            SJSU One Board

IDLE: 1
MORNING: 2
OPEN: 3
PAUSE: 99
ON: 0

IV. Testing Results

With the motor attached to the board and the blind we turned on the board. While in IDLE it is not necessary to get the light sensor guarded from light; however, as soon as you press button 0 you must have your hand of the light sensor or the blinds will automatically and quickly close the blinds. Once you do remove your hand from covering the light sensor the motor will start and close the blind until you either cover the sensor. Press button 0 or button 1. Once back in IDLE you can freely move the blind wand around. Then if you want to close it again at it’s bright out the blinds will close once back in the morning state. From IDLE you can also directly test all the features to make sure everything is working. PAUSE by pressing Button 1 and ON (which is motor is always on) by pressing Button 2. ON was designed to allow for debugging and to allow the user to check the motor. 
    
V. Conclusion

The purpose of this lab was to create a device that would turn the blinds for us. This could be helpful for people who are physically incapable of turning the blinds or for those who are simply lazy to turn them. Through this lab project, we learned how to use transistors, breadboards, motors, batteries and how to connect the SJOne board to them using male-male and male-female wires. We had to find a perfect fit for the motor to fit the blinds and lightweight blinds to allow the motor to turn them without going past its threshold. At one point, we 	C provide a better understanding of the program.
 
A.	Parts List
○	SJOne Board
○	Bread board
○	Battery Holder
○	Jumper Wire Kit
○	3V DC Stepper Motor
○	N-Channel MOSFET 60V 30A
○	PVC Pipe
○	Aluminum Mini-Blinds

B.	Schematics
○	Check Appendix A

III. Testing Procedure

1)	First connecting our white cable to pin.20 and the black cable to ground
2)	Then if you press button labeled 2, take you to state ON, then it will test the motor to see if the motor is connected
3)	From state ON you can test the PAUSE function by clicking the button labeled 1
4)	In state PAUSE you can press any button labeled 0, 1, or 2 to return to the previous state
5)	In ON you can press 0 to go back to IDLE the first state
6)	While back in IDLE you can press 0 to go to the MORNING state, which will be checking for the levels of light
7)	If the level of light is high the motor will start until the light levels. The high light sends you to the state CLOSE which keeps the motor on and also checks if the light drops. One the light levels lowers CLOSE will go back to morning
8)	The cycle repeats until you press 0 to take it back to IDLE. You can go to IDLE from
soldered a wrong wire, unsoldered it, and then soldered the correct wire to get the project to work. Through that experience we learned to be organized and know which wire goes where and first identify where the problem lies before trying to fix it. Overall, both of us had a great experience trying to build a fully functioning blind turner and exploring such parts for the first time.  


VI. Appendices and References

Appendix A: Circuit Diagram
 https://imgur.com/i0yTSdr


Appendix B: Machine State Diagram 
 https://imgur.com/YXGKfuL

