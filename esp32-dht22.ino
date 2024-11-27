#include "DHT.h"
#define DHT22PIN 15
#define DHT22PIN 13
DHT dht1(DHT22PIN, DHT22);
DHT dht2(DHT22PIN, DHT22);

void setup() {
  pinMode(15, OUTPUT);
  pinMode(13, OUTPUT);
   Serial.begin(115200);
  dht1.begin();
  dht2.begin();
}

void loop() {

  float humi1 = dht1.readHumidity();
  float temp1 = dht1.readTemperature();
  float humi2 = dht2.readHumidity();
  float temp2 = dht2.readTemperature();
  Serial.print("Humi1=" + String(humi1)+"%");
  Serial.print("Temp1=" + String(temp1)+"C°");
  Serial.println("---");
  delay(2000);
  Serial.print("Humi2=" + String(humi2)+"%");
  Serial.print("Temp2=" + String(temp2)+"C°");
  Serial.println("---");
  delay(2000);

}