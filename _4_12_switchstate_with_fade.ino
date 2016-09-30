// issues with blink at top and bottom of sequence.
// gets stuck in loop if you change the > < values to counter act the blinking
// see next sketch for fix

int switchState =1;
int brightness = 0;
int fadeAmount=2;

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
analogWrite(6,brightness);
brightness= brightness + fadeAmount;

if(brightness >255 || brightness < 0){
fadeAmount=-fadeAmount;
}
}
else{
analogWrite(6,0);
}

Serial.print( "switch =");
Serial.print( switchState);

Serial.print( ",  brightness =");
Serial.println( brightness);


}
