import processing.serial.*;

Serial serial;

void setup() 
{
  size(200,200);
  
  for (int i = 0; i < Serial.list().length; i++) {
    print(i + " ");
    println(Serial.list() [i]);
  }
  
  String portName = Serial.list()[0];
  serial = new Serial(this, portName, 9600);
}

void draw() {
  if (mousePressed == true) {
    serial.write('1');
    println("1");
  }
  else {
    serial.write('0');
  }   
}
