//Constants
const int buttonPin = 2;  //yellow   
const int ledPin =  3;    //orange 
const int buttonPinTwo = 4;     
const int ledPinTwo =  5; 

//Variables
int buttonState = 0;
int flag=0;
int buttonStateTwo = 0;
int flagTwo=0;

void setup() {
  //Input or output?
  pinMode(ledPin, OUTPUT);      
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(ledPinTwo, OUTPUT);      
  pinMode(buttonPinTwo, INPUT_PULLUP);    
}

void loop(){
  //Read button state (pressed or not pressed?)
  buttonState = digitalRead(buttonPin);

  //If button pressed...
  if (buttonState == LOW) { 
    //...ones, turn led on!
    if ( flag == 0){
      digitalWrite(ledPin, HIGH);
      flag=1; //change flag variable
    }
    //...twice, turn led off!
    else if ( flag == 1){
      digitalWrite(ledPin, LOW);
      flag=0; //change flag variable again 
    }    
  }
  delay(200); //Small delay

  buttonStateTwo = digitalRead(buttonPinTwo);
  
{
  digitalWrite(ledPinTwo, HIGH);
  delay(1000);
  digitalWrite(ledPinTwo, LOW);
  delay(1000);
} 

}


    
