/* Dylan Himes */
// Aleksa Rodic
//Chloe Hale
int outPin = 8;
int inPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(outPin,OUTPUT);
  pinMode(inPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(digitalRead(inPin) == HIGH){
      delay(500);
      digitalWrite(outPin,HIGH);
      delay(500);
      digitalWrite(outPin,LOW);
    }
  }
