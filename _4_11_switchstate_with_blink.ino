

int switchState =1;

void setup(){
Serial.begin(9600);
pinMode(5,INPUT);
pinMode(6,OUTPUT);
}

void loop(){
if (digitalRead(5)==HIGH){
  switchState=-switchState;
  delay(150);
}
if(switchState==-1){
digitalWrite(6,HIGH);
delay(100);
digitalWrite(6,LOW);
delay(100);
}
else{
digitalWrite(6,LOW);
}

Serial.println(switchState);

}
