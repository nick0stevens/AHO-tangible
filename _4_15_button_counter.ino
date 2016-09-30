const int ledPin= 6;
const int switchPin=5;
int ledState=0;
int ledBrightness =0;

void setup(){
pinMode( ledPin,OUTPUT);
pinMode( switchPin,INPUT);
Serial.begin(9600);
}


void loop(){
if(digitalRead(switchPin)==HIGH){
  // explain this line without braces
ledState=ledState++;

if(ledState==6){
  ledState=0;
}
else if (ledState==1){
ledBrightness=30;
}
else if(ledState==2){
ledBrightness=100;
}
else if(ledState==3){
ledBrightness=150;
}
else if(ledState==4){
ledBrightness=200;
}
else if(ledState==5){
ledBrightness=250;
}
else{
ledBrightness=0;
}

delay(150);
}
analogWrite(ledPin,ledBrightness);

Serial.println(ledState);
}
