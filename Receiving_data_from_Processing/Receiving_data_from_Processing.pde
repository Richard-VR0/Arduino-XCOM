import processing.serial.*;

Serial serial;

void setup()
{
  //TRAMITE IL FOR CONTROLLARE LA PORTA A CUI È COLLEGATO ARDUINO
  for (int i = 0; i < Serial.list().length; i++) {
    print(i + " ");
    println(Serial.list() [i]);
  }
  //FINE DEL CONTROLLO
  
  String pname = Serial.list() [0];
  
  serial = new Serial(this, pname, 9600);
}

void draw()
{
  if (serial.available() > 0) {
    String val = serial.readStringUntil('\n');
    
    print(val);
  }
}
