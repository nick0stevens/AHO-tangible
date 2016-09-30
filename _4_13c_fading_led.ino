int fadeAmount=5;
int ledPin = 6;    // LED connected to digital pin 9

void setup()  { 
  // nothing happens in setup 
  Serial.begin(9600);
} 

void loop()  { 
  
   int x = fadeAmount;
   for (int brightness = 0; brightness > -1; brightness = brightness + x){
      analogWrite(ledPin, brightness);
      if (brightness == 255) x = -fadeAmount;             // switch direction at peak
      delay(30);
  // Serial.println(brightness);
   } 
   
   Serial.println("now");
}







