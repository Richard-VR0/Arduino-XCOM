#include <EEPROM.h>

//Lettura della EEPROM

int i;
byte ch;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (i = 0; i < EEPROM.length(); i++) {
    ch = EEPROM.read(i);
    
    Serial.print(i);
    Serial.print(" ==> ");
    Serial.println(ch);
  }

  delay(600000);
}
