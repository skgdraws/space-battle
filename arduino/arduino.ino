
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
// 1 - Up, 2 - Down, 3 - Left, 4 - Select
byte buttonPins[] = {2, 3, 4, 5};

// 7 Segment Display:
// A - B - C - D - E - F - G - DP
byte displayPins[] = {6, 7, 8, 9, 10, 11, 12};
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
  byte hardwareConfig = COMMON_CATHODE;
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

  // setting up for serial reading of buttons
  if (pressUp)
    Serial.println('u');

  if (pressDown)
    Serial.println('d');

  // Using ranges for potenciometer values
  if (analogInValue <= 43)
    Serial.println(0);
  else if (analogInValue <= 86)
    Serial.println(1);
  else if (analogInValue <= 129)
    Serial.println(2);
  else if (analogInValue <= 172)
    Serial.println(3);
  else if (analogInValue <= 215)
    Serial.println(4);
  else
    Serial.println(5);

  sevseg.setNumber(curWave);
  sevseg.refreshDisplay();


  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(100);

}
