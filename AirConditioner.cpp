#include <Arduino.h>
#include "dhtAirConditioner.h"

void setup() {
  Serial.begin(115200);
  DHTsetup();
}

void loop() {
	DHTloop();
}
