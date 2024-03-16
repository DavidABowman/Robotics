//Code to receive data from serial port
//Works as an interrupt, using a loop to detect if there's data to read

char inChar; //define a variable to store character recieved from serial port
int counter = 0; //define a variable as the data /sent/ to Serial port
void setup(){
  Serial.begin(9600); //initialise serial port and set baud rate 9600
}
void loop(){
  //Print value of variable counter to serial
  Serial.print("counter"); //print string "counter"
  Serial.println(counter); //print value of variable "counter"
  delay(1000); //wait 1000ms to avoid cycling too fast
  counter++; //variable counter increases 1
}
void serialEvent(){
  if (Serial.available()){ //judge whether data has been recieved
     inChar = Serial.read(); //read one character
     Serial.print("recieved:"); //print string "recieved"
     Serial.println(inChar); //print recieved character
  }
}