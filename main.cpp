#include <Arduino.h>
#include "DhtAirConditioner.h"
#include "Remote.h"



void setup() {
  Serial.begin(115200);
  //DHTsetup();
  remoteSetup();
}

void loop() {
	//DHTloop();
	remoteLoop();
}

// my remote's decoded values
// 1 FF30CF
// 2 FF18E7
// 3 FF7A85
// + FF906F
// - FFE01F


// TO DO:
// implement remote functionality, make the remote display temperature
// add dc fan to act as a cooler.
