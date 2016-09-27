void setup(){
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);
}

void loop(){
 if(digitalRead(4)==HIGH){ 
digitalWrite(5, HIGH);
}
else{
  digitalWrite(5, LOW);
  }
}
