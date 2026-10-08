int GREEN_LED = 8;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop()
{
 
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(GREEN_LED, LOW);
  
  delay(1000);
 
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(GREEN_LED, HIGH);
  delay(1000);
}