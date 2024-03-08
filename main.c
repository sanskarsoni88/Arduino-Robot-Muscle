#include <Servo.h>

Servo myservo_0;  // create servo object to control a servo
Servo myservo_1;  // create servo object to control a servo
Servo myservo_2;  // create servo object to control a servo
Servo myservo_3;  // create servo object to control a servo


int POT_0 = 0;  // analog pin used to connect the potentiometer
int POT_1 = 1;  // analog pin used to connect the potentiometer
int POT_2 = 2;  // analog pin used to connect the potentiometer
int POT_3 = 3;  // analog pin used to connect the potentiometer
int val_0;    // variable to read the value from the analog pin
int val_1;    // variable to read the value from the analog pin
int val_2;    // variable to read the value from the analog pin
int val_3;    // variable to read the value from the analog pin



void setup() {
  myservo_0.attach(4);  // attaches the servo on pin 9 to the servo object
  myservo_1.attach(5);
  myservo_2.attach(6);
  myservo_3.attach(7);
  Serial.begin(9600);
  int val_0 = 0; // Base t\start is 0
  int val_1 = 55; // Shoulder start is 55
  int val_2 = 70; // Elbow Rot start is 70
  int val_3 = 100; // Elbow Bend 100
}

void loop() {
  
  val_0 = analogRead(POT_0);            // reads the value of the potentiometer (value between 0 and 1023)
  val_0 = map(val_0, 0, 1023, 0, 270);     // scale it to use it with the servo (value between 0 and 180)
  myservo_0.write(val_0);                  // sets the servo position according to the scaled value
  Serial.print(val_0);

  Serial.print("   ---   ");

  val_1 = analogRead(POT_1);            // reads the value of the potentiometer (value between 0 and 1023)
  val_1 = map(val_1, 0, 1023, 0, 270);     // scale it to use it with the servo (value between 0 and 180)
  myservo_1.write(val_1);                  // sets the servo position according to the scaled value
  Serial.print(val_1);

  Serial.print("   ---   ");

  val_2 = analogRead(POT_2);            // reads the value of the potentiometer (value between 0 and 1023)
  val_2 = map(val_2, 0, 1023, 0, 270);     // scale it to use it with the servo (value between 0 and 180)
  myservo_2.write(val_2);                  // sets the servo position according to the scaled value
  Serial.print(val_2);

  Serial.print("   ---   ");

  val_3 = analogRead(POT_3);            // reads the value of the potentiometer (value between 0 and 1023)
  val_3 = map(val_3, 0, 1023, 0, 270); // scale it to use it with the servo (value between 0 and 180)
  myservo_3.write(val_3-20);                  // sets the servo position according to the scaled value
  Serial.println(val_3);

 
 
  delay(15);                           // waits for the servo to get there
}
