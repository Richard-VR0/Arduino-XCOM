#include <SoftwareSerial.h>

SoftwareSerial SSerial(6, 7); //6 = RX 7 = TX

void setup() {
  SSerial.begin(9600);
  Serial.begin(9600);
}

String line = "";

void loop() {
  if (SSerial.available()) {
    char ch = SSerial.read();

    if ((ch == '\n') || (ch == '\r')) {
      process(line);
      line = "";
    }
    else {
      line += ch;
    }
  }
}

void process(String line) {
  Serial.println(line);
}