
#include "SevSeg.h"
SevSeg sevseg; 

/*
 ---------------------------------
  Components on the board
 ---------------------------------
*/

// Potenciometer
const int analogInPin = A0;

// Buttons:
// 1 - Up, 2 - Down, 3 - Left, 4 - Right, 5 - Select
byte buttonPins[] = {2, 3, 4, 5, 6};

// 7 Segment Display:
// A - B - C - D - E - F - G - DP
byte displayPins[] = {8, 9, 12, 11, 10, 7, 6, 13};
byte digitPins[] = {};

// Values that are being read
int analogInValue = 0;
int analogueOutValue = 0;
int curWave = 0;

// Setting up serial communication
void setup() {

  // initializing communications
  Serial.begin(9600);
  Serial.print("Connection established succesfully");

  for (int i = 0; i < 4; i++){

    pinMode(buttonPins[i], INPUT);
  }

  pinMode(analogInPin, INPUT_PULLUP);

  bool resistorOnSegments = true;
  byte hardwareConfig = COMMON_ANODE; 
  byte numDigits = 1;
  sevseg.begin(hardwareConfig, numDigits, digitPins, displayPins, resistorOnSegments);
  sevseg.setBrightness(90);
}

void loop() {
  
  // read the analog in value:
  analogInValue = analogRead(analogInPin);

  bool pressUp = digitalRead(buttonPins[0]);
  bool pressDown = digitalRead(buttonPins[1]);
  bool pressLeft = digitalRead(buttonPins[2]);
  bool pressRight = digitalRead(buttonPins[3]);
  bool pressSelect = digitalRead(buttonPins[4]);

  // print the results to the Serial Monitor:
  Serial.print("Press Up = ");
  Serial.print(pressUp);
  Serial.print("\t Press Down = ");
  Serial.println(pressDown);
  Serial.print("Press Left = ");
  Serial.print(pressLeft);
  Serial.print("\t Press Right = ");
  Serial.println(pressRight);
  Serial.print("\n");

  Serial.print("Analog Value = ");
  Serial.println(analogInValue);

  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(500);
}
