
int brightness=0;
int fadeAmount=2;

void setup(){
Serial.begin(9600);
pinMode(5,OUTPUT);
}

void loop(){

digitalWrite(5, brightness);

brightness=brightness+fadeAmount;


if(brightness==254){
  
 // whats wrong with the line above?
fadeAmount=-fadeAmount;
}

Serial.println(brightness);
}
