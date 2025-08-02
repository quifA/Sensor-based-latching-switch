# Sensor-based-latching-switch
This project simulates a latching power switch using a PIR sensor and a toggle button. The system turns ON when motion is detected and stays active for 10 seconds, then turns OFF automatically. A push button is used to enable or disable the entire system manually

## Components Used
- Arduino UNO board  
- PIR motion sensor  
- Push button  
- LED  
- Resistors (220Ω for the LED + pull-down for the button)  
- Jumper wires  
- Breadboard  

## How It Works
- Pressing the button toggles the system ON or OFF.
- When the system is ON, the LED turns ON if motion is detected.
- The LED stays ON for 10 seconds after the last detected motion.
- If the system is OFF, the LED remains OFF regardless of motion.

## PIC
![Pic](https://github.com/user-attachments/assets/8415939a-b5c3-4f2f-886b-7fdacc60e521)
