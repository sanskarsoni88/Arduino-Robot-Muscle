#include <Servo.h>

// Create servo objects to control the servos
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

// Array of servo objects for easier iteration
Servo servos[] = {myservo1, myservo2, myservo3, myservo4};

// Analog pins used to connect the potentiometers
int potpins[] = {0, 1, 2, 3};
// Digital pins the servos are connected to
int servoPins[] = {A0, A1, A2, A3};

void setup() {
    // Attach each servo to its respective pin
    for (int i = 0; i < 4; i++) {
        servos[i].attach(servoPins[i]);
    }
}

void loop() {
    for (int i = 0; i < 4; i++) {
        int val = analogRead(potpins[i]);  // Read the value from the analog pin
        val = map(val, 0, 1023, 0, 180);   // Map the value to a range of 0 to 180
        servos[i].write(val);              // Set the servo position according to the mapped value
        delay(15);                         // Wait for the servo to reach the position
    }
}
