int brightness=0;
void setup(){
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);
}

void loop(){
digitalWrite(5, brightness);
brightness=brightness+1;
}

