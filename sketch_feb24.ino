const int speaker = 8;
int photocell = A0;

//array of frequency values to play tune

void setup() {
  Serial.begin(9700);
  pinMode(speaker, OUTPUT);

}

void loop() {
  int sensorReadings= analogRead(photocell);
  Serial.print("photoCells: ");
  Serial.println(sensorReadings);

  int frequency = map(sensorReadings, 400, 550, 100, 1000);

  if(frequency < 420){
    tone(speaker, frequency, 10);
  }
  else if(frequency < 450){
    tone(speaker, frequency, 10);
  }
  else if(frequency < 475){
    tone(speaker, frequency, 10);
  }
  else if(frequency < 500){
    tone(speaker, frequency, 10);
  }
  else{
    noTone(speaker);
  }

}
