int v1 = 3;
int v2 = 4;
int v3 = 5;
int v4 = 6;
int ena = 12;
int enb = 13;

void setup() {
  pinMode(v1, OUTPUT);
  pinMode(v2, OUTPUT);
  pinMode(v3, OUTPUT);
  pinMode(v4, OUTPUT);
  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);
  Serial.begin(9600);
  digitalWrite(ena, HIGH);  // Assuming these enable pins need to be HIGH
  digitalWrite(enb, HIGH);  // for the motors to run
}

void mf();
void mr();
void s();
void l();
void r();

void loop() {
  mf();
  delay(2000);
  mr();
  delay(2000);
  s();
  delay(2000);
  l();
  delay(2000);
  r();
  delay(2000);
}

void mf() {
  digitalWrite(v1, HIGH);
  digitalWrite(v2, LOW);
  digitalWrite(v3, HIGH);
  digitalWrite(v4, LOW);
  Serial.println("Moving forward");
}

void mr() {
  digitalWrite(v1, LOW);
  digitalWrite(v2, HIGH);
  digitalWrite(v3, LOW);
  digitalWrite(v4, HIGH);
  Serial.println("Moving reverse");
}

void s() {
  digitalWrite(v1, LOW);
  digitalWrite(v2, LOW);
  digitalWrite(v3, LOW);
  digitalWrite(v4, LOW);
  Serial.println("Stopped");
}

void l() {
  digitalWrite(v1, HIGH);
  digitalWrite(v2, LOW);
  digitalWrite(v3, LOW);
  digitalWrite(v4, LOW);
  Serial.println("Turning left");
}

void r() {
  digitalWrite(v1, LOW);
  digitalWrite(v2, LOW);
  digitalWrite(v3, HIGH);
  digitalWrite(v4, LOW);
  Serial.println("Turning right");
}
