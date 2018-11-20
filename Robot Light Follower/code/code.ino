int WRa = 4;
int WRb = 5;
int WLa = 6;
int WLb = 7;
int ldrR = A0;
int ldrL = A1;
int LR, LL;

void setup() {
  pinMode(WRa, OUTPUT);
  pinMode(WRb, OUTPUT);
  pinMode(WLa, OUTPUT);
  pinMode(WLb, OUTPUT);
}

void loop() {
  dataLRdanLL();
  if (LL < LR) {
    rodakiri();
  }
  if (LL > LR) {
    rodakanan();
  }
}

void dataLRdanLL() {
  LR = analogRead(ldrR);
  LL = analogRead(ldrL);
}

void rodakanan() {
  digitalWrite(WLa, HIGH);
  digitalWrite(WLb, LOW);
  digitalWrite(WRa, LOW);
  digitalWrite(WRb, LOW);
}

void rodakiri() {
  digitalWrite(WLa, LOW);
  digitalWrite(WLb, LOW);
  digitalWrite(WRa, HIGH);
  digitalWrite(WRb, LOW);
}
