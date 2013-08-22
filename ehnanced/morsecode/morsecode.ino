int ledPin=8;

#include "morsecode.h"

void setup() {
  pinMode(ledPin,OUTPUT);
}


void loop() {
  // this is a test
  t(); h(); i(); s(); delay(wordSpace);
  i(); s(); delay(wordSpace);
  a(); delay(wordSpace);
  t(); e(); s(); t(); delay(wordSpace);

  delay(wordSpace);
  delay(wordSpace);
  delay(wordSpace);

  // sos
  s(); o(); s(); delay(wordSpace);
  delay(wordSpace);
  delay(wordSpace);
  delay(wordSpace);

}
