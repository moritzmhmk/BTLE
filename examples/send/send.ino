#include <SPI.h>
#include <RF24.h>
#include <BTLE.h>

RF24 radio(9,10);

BTLE btle(&radio);

void setup() {

  Serial.begin(9600);
  while (!Serial) { }
  Serial.println("BTLE advertisement sender");

  btle.begin();
}

void loop() {
  btle.advertise("foobar",0,0);
  btle.hopChannel();
}

