int led = 13;
int sensor = 2;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorval = digitalRead(sensor);
  Serial.println(sensorval);
  
  if (sensorval == HIGH) {
    digitalWrite(led, HIGH);
    Serial.println("motion");
  }
  else {
    digitalWrite(led, LOW);
    Serial.println("no motion");
  }
}
