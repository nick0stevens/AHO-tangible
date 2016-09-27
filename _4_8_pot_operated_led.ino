
int led= 5;

void setup(){
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop(){

analogWrite(led,(analogRead(2)/4));


Serial.println(analogRead(2));
}
