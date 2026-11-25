String readvoice;
int red_led = 2;
int blue_led = 3;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(red_led, OUTPUT);
pinMode(blue_led, OUTPUT);
  
}


void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()){
  delay(10);
  char c = Serial.read();
  readvoice += c;

}
if(readvoice.length() > 0){
  Serial.println(readvoice);
  if(readvoice == "RED ON"){
    digitalWrite(red_led, HIGH);
    digitalwrite(blue_led, LOW);

  }
  else if (readvoice == "RED OFF"){
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, LOW);

  }
  else if (readvoice == "BLUE ON"){
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, HIGH);

  }
  else if(readvoice == "BLUE OFF"){
    digitalWrite(red_led, LOW);
    digitalWrite(blue_led, LOW);

  }
  readvoice = "";
}
}