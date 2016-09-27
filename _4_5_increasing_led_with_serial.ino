
int brightness=0;
void setup(){
Serial.begin(9600);
}

void loop(){

digitalWrite(5, brightness);
brightness=brightness+1;
Serial.println(brightness);
}
