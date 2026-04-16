const int IN1 = 9;
const int IN2 = 8;
const int ENA = 10;

int velocidad = 170;
int tiempo20Grados = 220; 
int tiempo15Grados = 165;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);

  Serial.begin(9600);
  Serial.println("Secuencia: +20° / -15° con Freno Activo");
}

void loop() {
  Serial.println("Girando +20°...");
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, velocidad);
  delay(tiempo20Grados);

  frenar();
  delay(500);

  Serial.println("Regresando -15°...");
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, velocidad);
  delay(tiempo15Grados);

  frenar();
  Serial.println("Ciclo completado.");
  
  delay(1000);
}

void frenar() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 255);
}