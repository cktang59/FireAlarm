#include <DHT.h>
#include <DHT_U.h>
#define Type DHT11
int readPin = 7;
DHT HT(readPin, Type);
int potent_trigger = 13;
float TempC;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(potent_trigger, OUTPUT);
  Serial.begin(9600);
  HT.begin();
} 

void loop() {
  // put your main code here, to run repeatedly:
  TempC = HT.readTemperature();
  Serial.println(TempC);
  delay(1000);
  if(TempC >32)
  {
    digitalWrite(potent_trigger, HIGH);
  }
  else
  {
    digitalWrite(potent_trigger, LOW);
  }
  

}
