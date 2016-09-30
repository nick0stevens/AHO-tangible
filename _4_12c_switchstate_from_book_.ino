// Example 03C: Turn on LED when the button is pressed
// and keep it on after it is released
// including simple de-bouncing
// Now with another new and improved formula!!



// oddities were unwanted events happens

const int LED = 6;   // the pin for the LED
const int BUTTON = 5; // the input pin where the
                      // pushbutton is connected
                      
int val = 0;     // val will be used to store the state
                 // of the input pin
int old_val = 0; // this variable stores the previous
                 // value of "val"
int state = 1;   // 0 = LED off and 1 = LED on

void setup() {
  pinMode(LED, OUTPUT);   // tell Arduino LED is an output
  pinMode(BUTTON, INPUT); // and BUTTON is an input
}

void loop(){
  val = digitalRead(BUTTON); // read input value and store it
                             
                             
  // check if there was a transition
  if ((val == HIGH) && (old_val == LOW)){
    state = 1 - state;
    delay(100);
  }
  old_val = val; // val is now old, let's store it
  if (state == 1) {
    digitalWrite(LED, HIGH); // turn LED ON
  } 
  else {
    digitalWrite(LED, LOW);
  }
}

