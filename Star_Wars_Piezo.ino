int pin = 8;
int i;
int stato;
int pulsante = 7;
int led = 11;

void setup() {
  pinMode(pin, OUTPUT);
  pinMode(pulsante, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  stato = digitalRead(pulsante);
  digitalWrite(led, HIGH);

  if (stato == HIGH) {
    digitalWrite(led, LOW);
    
    //INIZIO PRIMO PENTAGRAMMA
    for (i = 0; i < 3; i++) {
      tone(pin, 784, 500);
      delay(600);
    }

    tone(pin, 622, 250);
    delay(350);
  
    tone(pin, 932, 125);
    delay(225);
    
    //4/4

    tone(pin, 784, 500);
    delay(600);
  
    tone(pin, 622, 250);
    delay(350);
  
    tone(pin, 932, 125);
    delay(225);

    tone(pin, 784, 1000);
    delay(1100);

    //4/4

    for (i = 0; i < 3; i++) {
      tone(pin, 1175, 500);
      delay(600);
    }

    tone(pin, 1245, 250);
    delay(350);

    tone(pin, 932, 125);
    delay(225);

    //4/4

    tone (pin, 740, 500);
    delay(600);

    tone(pin, 622, 250);
    delay(350);
  
    tone(pin, 932, 125);
    delay(225);

    tone(pin, 784, 1000);
    delay(1100);
    //FINE PRIMO PENTAGRAMMA

    //INIZIO SECONDO PENTAGRAMMA
    tone(pin, 1568, 500);
    delay(600);

    tone(pin, 784, 250);
    delay(350);

    tone(pin, 784, 125);
    delay(225);

    tone(pin, 1568, 500);
    delay(600);

    tone(pin, 1480, 250);
    delay(350);

    tone(pin, 1397, 125);
    delay(225);

    //4/4

    tone(pin, 1319, 125);
    delay(225);

    tone(pin, 1245, 125);
    delay(225);

    tone(pin, 1319, 250);
    delay(350);

    tone(pin, 830, 250);
    delay(350);

    tone(pin, 1109, 500);
    delay(600);

    tone(pin, 1047, 250);
    delay(350);

    tone(pin, 987, 125);
    delay(225);

    //4/4

    tone(pin, 932, 125);
    delay(225);

    tone(pin, 880, 125);
    delay(225);

    tone(pin, 932, 250);
    delay(350);

    tone(pin, 622, 250);
    delay(350);

    tone(pin, 740, 500);
    delay(600);

    tone(pin, 622, 250);
    delay(350);

    tone(pin, 740, 125);
    delay(225);

    //4/4

    tone(pin, 932, 500);
    delay(600);

    tone(pin, 784, 250);
    delay(350);

    tone(pin, 932, 125);
    delay(225);

    tone(pin, 587, 1000);
    delay(1100);
    //FINE SECONDO PENTAGRAMMA

    //INIZIO TERZO PENTAGRAMMA
    tone(pin, 1568, 500);
    delay(600);

    tone(pin, 784, 250);
    delay(350);

    tone(pin, 784, 125);
    delay(225);

    tone(pin, 1568, 500);
    delay(600);

    tone(pin, 1480, 250);
    delay(350);

    tone(pin, 1397, 125);
    delay(225);

    //4/4

    tone(pin, 1319, 125);
    delay(225);

    tone(pin, 1245, 125);
    delay(225);

    tone(pin, 1319, 250);
    delay(350);

    tone(pin, 830, 250);
    delay(350);

    tone(pin, 1109, 500);
    delay(600);

    tone(pin, 1047, 250);
    delay(350);

    tone(pin, 987, 125);
    delay(225);

    //4/4

    tone(pin, 932, 125);
    delay(225);

    tone(pin, 880, 125);
    delay(225);

    tone(pin, 932, 250);
    delay(350);

    tone(pin, 622, 250);
    delay(350);

    tone(pin, 740, 500);
    delay(600);

    tone(pin, 622, 250);
    delay(350);

    tone(pin, 932, 125);
    delay(225);

    //4/4

    tone(pin, 784, 500);
    delay(600);

    tone(pin, 622, 250);
    delay(350);

    tone(pin, 932, 125);
    delay(225);

    tone(pin, 784, 1000);
    delay(1100);

    digitalWrite(led, HIGH);
  }
}
