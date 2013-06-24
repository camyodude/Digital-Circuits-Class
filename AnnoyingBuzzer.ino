void setup()
{
 pinMode(3, OUTPUT); 
  pinMode(9, INPUT);
}

void loop()
{
  if (digitalRead(9) == HIGH )
  {
  digitalWrite(3, HIGH);
  }
  else
  {
   digitalWrite(3, LOW);
  }
  delay(1);
 
}
