#define BUTTON_PIN 21 // GIOP21 pin connected to button
#define ledPin 2

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize the pushbutton pin as an pull-up input
  // the pull-up input pin will be HIGH when the switch is open and LOW when the switch is closed.
  pinMode(ledPin, OUTPUT);                   // initialize the LED pin as an output:
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  // read the state of the switch/button:
  int buttonState = digitalRead(BUTTON_PIN);
  int stateSend = 0;

  if (buttonState == HIGH) {                  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
       digitalWrite(ledPin, HIGH);
       stateSend = 0;             // turn LED on:
   } else {
       digitalWrite(ledPin, LOW);
       stateSend = 1;              // turn LED off:
      }
  // print out the button's state
  Serial.println(stateSend);
}


//const int buttonPin = 2;                       // the number of the pushbutton pin
//const int ledPin =  21;                        // the number of the LED pin
//int buttonState = 0;                           // variable for reading the pushbutton status
//void setup() {
//    pinMode(ledPin, OUTPUT);                   // initialize the LED pin as an output:
//    pinMode(buttonPin, INPUT_PULLUP);          // initialize the pushbutton pin as an input:
//}                                               
//void loop() {
//   buttonState = digitalRead(buttonPin);       // read the state of the pushbutton value:
//   if (buttonState == HIGH) {                  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
//       digitalWrite(ledPin, HIGH);             // turn LED on:
//   } else {
//       digitalWrite(ledPin, LOW);              // turn LED off:
//   }
//}       
//         