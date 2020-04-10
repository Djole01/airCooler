/*
 * dhtAirConditioner.h
 *
 *  Created on: Apr 10, 2020
 *      Author: root
 */

#ifndef DHTAIRCONDITIONER_H_
#define DHTAIRCONDITIONER_H_


#define DHTPIN 7     // Digital pin connected to the DHT sensor
// Feather HUZZAH ESP8266 note: use pins 3, 4, 5, 12, 13 or 14 --
// Pin 15 can work but DHT must be disconnected during program upload.

// Uncomment whatever type you're using!
#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

void DHTsetup();
void DHTloop();




#endif /* DHTAIRCONDITIONER_H_ */
