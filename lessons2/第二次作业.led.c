int i=0;
void setup()
{
  for(i=0;i<8;i++)
  {
  pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=0;i<8;i++)
  {
  digitalWrite(i, HIGH);
  delay(300); // Wait for 300 millisecond(s)
  digitalWrite(i, LOW);
  delay(300); // Wait for 300 millisecond(s)
  }
}