
int brightness=0;
int fadeAmount=5;
int ledPin = 6;


void setup(){
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}

void loop(){
  brightness= brightness + fadeAmount;
if(brightness >=255 || brightness <= 0){
fadeAmount=-fadeAmount;
}

analogWrite(6,brightness);
delay(30);

Serial.println("now");
//Serial.println(brightness);
}
