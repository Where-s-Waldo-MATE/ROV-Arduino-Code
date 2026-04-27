[GitHub Readme.pdf](https://github.com/user-attachments/files/27126842/GitHub.Readme.pdf)
🎮 Arduino Joystick-Controlled ESC System
This project uses an Arduino to control multiple motors and a claw using two joysticks. Each joystick axis is mapped to a motor or actuator via Electronic Speed Controllers (ESCs) and a servo.

📦 Features
Control 4 motors using joystick inputs
Independent control of:
Right motor
Left motor
Dual vertical motors
Control a claw servo
Simple analog input → servo output mapping

🛠️ Hardware Requirements
Arduino Mega
4 × ESC-controlled motors
1 × Servo motor (claw)
2 × Joysticks (4-axis total)
External power supply (recommended for ESCs)
Wires

🔌 Pin Configuration
Component	Arduino Pin
ESC_Right	13
ESC_Left	12
ESC_Up1	9
ESC_Up2	10
Claw Servo	8
Joystick 1	A5
Joystick 2	A6
Joystick 3	A7
Joystick 4	A4

⚙️ How It Works
Each joystick axis outputs an analog signal (0–1023), which is:
Read using analogRead()
Mapped to a servo range (0–180)
Sent to the ESC or servo using write()
Example:
joystick1 = analogRead(A5);
joystick1 = map(joystick1, 1023, 0, 0, 180);
ESC_Right.write(joystick1);

🚀 Getting Started
Install the Arduino IDE
Make sure the Servo library is installed
Sketch → Include Library → Manage Libraries → Servo
Upload the code to your Arduino
Connect hardware according to the pin table
Power the system and test joystick control

⚠️ Important Notes
ESCs may require calibration before use
Use an external power source for motors (do NOT power from Arduino 5V)
Ensure common ground between Arduino and ESC power supply
Joystick values are inverted (1023 → 0) intentionally for control direction

📄 License
This project is open-source and free to use for educational and personal projects.
