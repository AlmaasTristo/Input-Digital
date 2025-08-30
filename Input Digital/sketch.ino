

int BuTtbiR = 3, BuTthiJ = 4;
int LEDbLu = 5, LEDgree = 6;
int kondisi = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(BuTtbiR, INPUT);
  pinMode(BuTthiJ, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pullup = digitalRead(BuTthiJ);

  if(pullup == 1){
    digitalWrite(6, LOW);
  } else if(pullup == 0){
    digitalWrite(6, HIGH);
  } 

  if(digitalRead(BuTtbiR)){
    if(kondisi == 0){
      kondisi = 1;
      digitalWrite(5, HIGH);
    } else{
      kondisi = 0;
      digitalWrite(5, LOW);
    }
    delay(500);
  }
}
