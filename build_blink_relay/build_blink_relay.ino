int p=19;
void setup() {
  // put your setup code here, to run once:
   pinMode(p,OUTPUT);
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 
 
  Serial.println("Turning relay ON");
  digitalWrite(p,LOW);

  delay(1000);
  Serial.println("Turning relay OFF");

  digitalWrite(p,HIGH);
 delay(1000);
}
