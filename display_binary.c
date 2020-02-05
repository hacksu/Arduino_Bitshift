int displayValue = 0;
int displayPins[8]{2,3,4,5,6,7,8,9};
int readPin=13;
  
void setup()
{
  displayValue=0;
  for (int i = 0; i < 8; ++i)
  {
    pinMode(displayPins[i], INPUT);
  }
  pinMode(readPin, INPUT);
}

void loop()
{
  if(digitalRead(readPin) == HIGH){
   displayValue++; 
  } 
  for (int i =0; i<8; i++) {
    char r1 = (displayValue << (7-i));
    bool r = r1 >> 7;
    if (r) digitalWrite(displayPins[i], HIGH);
  	else digitalWrite(displayPins[i], LOW);
  }
  delay(100);
}
