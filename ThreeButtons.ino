int led1 = 8;
int led2 = 7;
int led3 = 6;
int inPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(inPin) == HIGH){
      delay(250);
      digitalWrite(led1,HIGH);
      delay(250);
      digitalWrite(led1,LOW);
      digitalWrite(led2,HIGH);
      delay(250);
      digitalWrite(led2,LOW);
      digitalWrite(led3,HIGH);
      delay(250);
      digitalWrite(led3,LOW);

    }
}
