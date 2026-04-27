#include <Servo.h>
Servo ESC_Right;
Servo ESC_Left;
Servo ESC_Up1;
Servo ESC_Up2;
Servo Claw; // create servo object to control the ESC (Electronic Speed Controller)

int joystick1; // value from the analog pin
int joystick2;
int joystick3;
int joystick4;

void setup() {

 ESC_Right.attach(13, 1000, 2000); // (pin, min pulse width, max pulse width in microseconds)
 ESC_Left.attach(12, 1000, 2000);
 ESC_Up1.attach(9, 1000, 2000);
 ESC_Up2.attach(10, 1000, 2000);
 Claw.attach(8,1000,2000);

}
void loop() {

 // Right Motor - Forward/Backward Front Motor Right
 // Right up joystick - blue
   joystick1 = analogRead(A5); // reads the value of the potentiometer (Joystick)(value between 0 and 1023)
   joystick1 = map(joystick1, 1023, 0, 0, 180); // scale it to use it with the servo library (value between 0 and 180)
   ESC_Right.write(joystick1); // Send the signal to the ESC
// Left up joystick - blue stripe
   joystick2 = analogRead(A6);
   joystick2 = map(joystick2, 1023, 0, 0, 180);
   ESC_Left.write(joystick2);

// Right down joystick - green stripe
   joystick3 = analogRead(A7);
   joystick3 = map(joystick3, 1023, 0, 0, 180);
   ESC_Up1.write(joystick3);
   ESC_Up2.write(joystick3);

// Left down joystick - orange stripe
   joystick4 = analogRead(A4);
   joystick4 = map(joystick4, 1023, 0, 0, 180);
   Claw.write(joystick4);
}
