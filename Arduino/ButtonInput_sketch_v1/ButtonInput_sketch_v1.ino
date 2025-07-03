#define BUTTON_PIN 21 // GIOP21 pin connected to button
#define LED_PIN 2

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize the pushbutton pin as an pull-up input
  // the pull-up input pin will be HIGH when the switch is open and LOW when the switch is closed.
  pinMode(LED_PIN, OUTPUT); 
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  // read the state of the switch/button:
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == HIGH) {                  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
       digitalWrite(LED_PIN, HIGH);             // turn LED on:
   } else {
       digitalWrite(LED_PIN, LOW);              // turn LED off:
      }

  // print out the button's state
  Serial.println(buttonState);
}
