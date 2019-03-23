int led = D6;

void setup() {
  pinMode(led, OUTPUT);
}

void shortblink()
{
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

void longblink()
{
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(500);
}

void loop() {
  //Letter W
  shortblink();
  longblink();
  longblink();
  
  //Letter A
  shortblink();
  longblink();
  
  //Letter N
  longblink();
  shortblink();
  
  //Letter G
  longblink();
  longblink();
  shortblink();
}
