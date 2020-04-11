#include <Arduino.h>
#include <IRremote.h>
#include "Remote.h"
#include "DhtAirConditioner.h"

int dhtFlag;
IRrecv irrecv(RECV_PIN);
decode_results results;

void remoteSetup(){
	irrecv.enableIRIn();
	irrecv.blink13(true);
	Serial.println(F("Remote control activated! :) "));

}


void remoteLoop(){
	if (irrecv.decode(&results)){

		switch(results.value){
		  case 0xFF30CF: //Keypad button "1"
			  Serial.println("1 pressed");
			  delay(500);
			  break;
		  case 0xFF18E7: //Keypad button "2"
			  Serial.println("2 pressed");
			  delay(500);
			  break;
		  case 0xFF7A85: //Keypad button "3"
			  Serial.println("3 pressed");
			  delay(500);
			  break;
		  case 0xFF906F: //Keypad button "+"
			  Serial.println("+ pressed");
			  delay(500);
			  break;
		  case 0xFFE01F: //Keypad button "-"
			  Serial.println("- pressed");
			  delay(500);
			  break;
		  }
		irrecv.resume();
	 }
}
