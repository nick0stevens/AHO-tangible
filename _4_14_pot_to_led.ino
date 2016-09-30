const int ledPin=6;
//#define ledPin 6
 int potValue;
 int ledBrightness;

void setup(){
pinMode(ledPin,OUTPUT);
}

void loop(){
potValue= analogRead(0);
ledBrightness=potValue/4;
analogWrite(ledPin,ledBrightness);
}


//void loop(){
//analogWrite(ledPin,(analogRead(0)/4));
//
//}



