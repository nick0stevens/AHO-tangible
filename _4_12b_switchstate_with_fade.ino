

int switchState =1;
int brightness = 0;
int fadeAmount=2;
int maxBrightness= 250;
int minBrightness= 40;




void setup(){
Serial.begin(9600);
pinMode(5,INPUT);
pinMode(6,OUTPUT);
}

void loop(){
  
  
if (digitalRead(5)==HIGH){
  switchState=-switchState;
  // this statement ensures that the switchState does not get  
  // stuck below minBrighthness and there for in a loop 
  if(switchState==-1){   
  brightness=minBrightness;
}
  delay(150);
}



if(switchState==-1){
  analogWrite(6,brightness);
brightness= brightness + fadeAmount;
  if(brightness >maxBrightness){ 
    brightness= maxBrightness;
fadeAmount=-fadeAmount;
}
  if(brightness <minBrightness){ 
    brightness= minBrightness;
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
