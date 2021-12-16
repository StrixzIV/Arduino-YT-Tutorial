const int led1 = 11;
const int led2 = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);

  delay(500);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);

  delay(500);*/

  for(int i = 0; i < 255; i++){
    analogWrite(led1, i);
    delay(10);
    Serial.println(i);
  }

  delay(10);

  for(int i = 255; i > 0; i--){
    analogWrite(led1, i);
    delay(10);
    Serial.println(i);
  }

  delay(10);
}
