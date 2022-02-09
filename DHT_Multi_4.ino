//Example testing sketch for various DHT
// orig ladyada, public domain

#include "DHT.h"

#define DHT1PIN 8
#define DHT2PIN 9
#define DHT3PIN 11
#define DHT4PIN 12 

#define DHT1TYPE DHT11 //DHT22
#define DHT2TYPE DHT11 // DHT22
#define DHT3TYPE DHT11 // DHT22
#define DHT4TYPE DHT11 // DHT22
//#define DHTTYPE DHT21

DHT dht1(DHT1PIN, DHT1TYPE);
DHT dht2(DHT2PIN, DHT2TYPE);
DHT dht3(DHT3PIN, DHT3TYPE);
DHT dht4(DHT4PIN, DHT4TYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHTxx test!");

  dht1.begin();
  dht2.begin();
  dht3.begin();
  dht4.begin();

}

void loop() {
  // put your main code here, to run repeatedly:

  int h1 = dht1.readHumidity();
  int h2 = dht2.readHumidity();
  int h3 = dht3.readHumidity();
  int h4 = dht4.readHumidity();

  int t1 = dht1.readTemperature();
  int t2 = dht2.readTemperature();
  int t3 = dht3.readTemperature();
  int t4 = dht4.readTemperature();
  delay (250);

  Serial.println ("H1, T1, H2, T2, H3, T3, H4, T4");
  Serial.print (h1);
  Serial.print (",");
  Serial.print (t1);
  Serial.print (",");
  Serial.print (h2);
  Serial.print (",");
  Serial.print (t2);
  Serial.print (",");
  Serial.print (h3);
  Serial.print (",");
  Serial.print (t3);
  Serial.print (",");
  Serial.print (h4);
  Serial.print (",");
  Serial.println (t4);
  
}
