int potPin= A0;  
int LEDPin= 9;  
int readValue;  
int writeValue; 
 
void setup() {
  pinMode(potPin, INPUT);  //set potPin to be an input
  pinMode(LEDPin, OUTPUT); //set LEDPin to be an OUTPUT
  Serial.begin(9600);     
}
 
void loop() {
  
 readValue = analogRead(potPin);  //Read the voltage
 analogWrite(LEDPin, map (readValue, 0, );      //map to output
 Serial.print("You are writing a value of ");  //for debugging print your values
 Serial.println(writeValue);
 
}
