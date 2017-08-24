#include<Arduino.h>
//#include "serialControl.h"
//#include "pirSensor.h"
#include "lightSensor.h"

const int channel1 = 7;
//const int sensorPin = 8;
const int lightPin = A0; // light sensor pin

void setup() {
	pinMode(channel1,OUTPUT);
	//pinMode(sensorPin,INPUT);
	//Serial.begin(9600);
	digitalWrite(channel1,HIGH);
}

void loop() {
	//serialControl(channel1);
	//pirSensor(sensorPin,channel1);
	lightSensor(lightPin,channel1);

}
