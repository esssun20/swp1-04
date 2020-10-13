#define PIN_LED 13
unsigned int count, toggle;

void setup(){
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); //Initialize serial port
  while (!Serial){
    ;//wait for serial port to connect.
  }
  for(int i=0;i<5;i++){
    digitalWrite(PIN_LED, HIGH);
    delay(100);
    digitalWrite(PIN_LED, LOW);
    delay(100);
  }
}

void loop(){
  while(1){}
 }


  
  
