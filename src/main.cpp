#include <Arduino.h>

// define números de pinos do driver no esp32
const int stepPin = 12;
const int dirPin = 13;
void setup () 
{
  // Define os dois pinos como Saídas
  pinMode (stepPin, OUTPUT);
  pinMode (dirPin, OUTPUT);
}

void loop() 
{
  // permite que o motor se mova em uma direção particular
  digitalWrite(dirPin, HIGH);

  // faz 200 pulsos para fazer uma rotação de ciclo completo
  for(int x = 0; x < 200; x++) 
    {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(500);
    }

  delay(1000); //1 segundo de delay para inverter a direção
  //Muda a direção da rotação
  digitalWrite(dirPin,LOW);

  // faz 400 pulsos para fazer duas rotações de ciclo completo
  for(int x = 0; x < 400; x++) 
    {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(500);
    }
  delay(1000); //1 segundo de delay para inverter a direção
}