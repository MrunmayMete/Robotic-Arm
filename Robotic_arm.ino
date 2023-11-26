#include <Servo.h>
#include <SoftwareSerial.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

char command; // Stores the command from the Android app via Bluetooth

int servo1Pos = 90; // Initial position for servo1
int servo2Pos = 90; // Initial position for servo2
int servo3Pos = 90; // Initial position for servo3
int servo4Pos = 120; // Initial position for servo4
int servo5Pos = 90; // Initial position for servo5
int servo6Pos = 180; // Initial position for servo6


void setup() {
  servo1.attach(2); // Attach servo on digital pin 9
  servo2.attach(3); // Attach servo on digital pin 10
  servo3.attach(4); // Attach servo on digital pin 11
  servo4.attach(5); // Attach servo on digital pin 12
  servo5.attach(6); // Attach servo on digital pin 13
  servo6.attach(10); // Attach servo on digital pin 14

  servo1.write(servo1Pos); // Set the initial position for servo1
  servo2.write(servo2Pos); // Set the initial position for servo2
  servo3.write(servo3Pos); // Set the initial position for servo3
  servo4.write(servo4Pos); // Set the initial position for servo4
  servo5.write(servo5Pos); // Set the initial position for servo5
  servo6.write(servo6Pos); // Set the initial position for servo6

  Serial.begin(9600); // Set the baud rate for the Serial monitor
}



void loop() {
  if (Serial.available() > 0) {
    command = Serial.read(); // Read the command from the Bluetooth module

      // Control the servo motors based on the received command
      if (command == '1') {
      servo1Pos += 10; // Increment the position by 5 degrees
      servo1.write(servo1Pos); // Move servo1
    } else if (command == '2') {
      servo1Pos -= 10; // Decrement the position by 5 degrees
      servo1.write(servo1Pos); // Move servo1
    } else if (command == '3') {
      servo2Pos += 10; // Increment the position by 5 degrees
      servo2.write(servo2Pos); // Move servo2
    } else if (command == '4') {
      servo2Pos -= 10; // Decrement the position by 5 degrees
      servo2.write(servo2Pos); // Move servo2
    } else if (command == '5') {
      servo3Pos += 10; // Increment the position by 5 degrees
      servo3.write(servo3Pos); // Move servo3
    } else if (command == '6') {
      servo3Pos -= 10; // Decrement the position by 5 degrees
      servo3.write(servo3Pos); // Move servo3
    } else if (command == '7') {
      servo4Pos += 10; // Increment the position by 5 degrees
      servo4.write(servo4Pos); // Move servo4
    } else if (command == '8') {
      servo4Pos -= 10; // Decrement the position by 5 degrees
      servo4.write(servo4Pos); // Move servo4
    } else if (command == '9') {
      servo5Pos += 10; // Increment the position by 5 degrees
      servo5.write(servo5Pos); // Move servo5
    } else if (command == '0') {
      servo5Pos -= 10; // Decrement the position by 5 degrees
      servo5.write(servo5Pos); // Move servo5
    } else if (command == 'a') {
      servo6Pos += 10; // Increment the position by 6 degrees
      servo6.write(servo6Pos); // Move servo6
    } else if (command == 'b') {
      servo6Pos -= 10; // Decrement the position by 6 degrees
      servo6.write(servo6Pos); // Move servo6
    }  
  }
}

