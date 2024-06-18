//Coordinated Simple Blinking

//Set Pin numbers on board:
int led1Pin = 4;
int led2Pin = 5;

void setup() {
    //Initialising the LED pin as an output
    pinMode(led1Pin, OUTPUT);
    pinMode(led2Pin, OUTPUT);
}

void loop() {
    setLED(HIGH, LOW);  //Set led1 on & led2 off
    setLED(LOW, HIGH);  //Vice Versa
}

void setLED(int led1, int led2) {
    digitalWrite(led1Pin, led1);    //The state of LED1 is determined by variable led1
    digitalWrite(led2Pin, led2);    //Same for led2
    delay(1000);
}