int led = 7;
void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}
void loop()
{
  float intensity = analogRead(0);
  if(intensity<110)
    digitalWrite(led,HIGH);
  else
    digitalWrite(led,LOW);
  Serial.println(intensity);
  delay(200);
}
