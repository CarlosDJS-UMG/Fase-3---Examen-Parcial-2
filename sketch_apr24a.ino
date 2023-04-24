#include <NewPing.h>

#define TRIGGER_PIN 10
#define ECHO_PIN 11
#define MAX_DISTANCE 200

int distance;
int dt = 1000;

void calculardistancia() {
  NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
  distance = sonar.ping_cm();
  Serial.print("La distancia del objeto es de: ");
  Serial.print(distance);
  Serial.println("cm.");
  delay(dt);
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  calculardistancia();
}