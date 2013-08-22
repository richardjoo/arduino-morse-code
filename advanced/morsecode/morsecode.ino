int ledPin=8;

#include "morsecode.h"

void setup() {
  pinMode(ledPin,OUTPUT);
}


void loop() {
  stringToMorseCode("Hello World");
  delay(wordSpace);
  delay(wordSpace);
  delay(wordSpace);
}
