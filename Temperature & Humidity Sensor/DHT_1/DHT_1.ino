
#include <DHT.h>
DHT dht(7, DHT11);
int dataPin=7;
void setup()
{
  Serial.begin(9600);
  dht.begin();
}
void loop()
{
  float temp=dht.readTemperature();
  float hum=dht.readHumidity();
  Serial.print("Temperature ");
  Serial.print(temp);
  Serial.print("C");
  Serial.print("     Humidity ");
  Serial.print(hum);
  Serial.print(" %");
  Serial.println();
  delay(1000);
}
