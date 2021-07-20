#include <DHT.h>;

/**
*Author: Felix Wensky
*Since: 15.05.2021
*/

//Constants
#define DHTPIN 8     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE); //// Initialize DHT sensor for normal 16mhz Arduino


//Variables
float hum;  //Stores humidity value
float temp; //Stores temperature value

void setup()
{
  Serial.begin(9600);
  dht.begin();
}

void loop()
{
	//wait 2 sec
    delay(2000);
	
    //read data and store it to variables hum and temp
    hum = dht.readHumidity();
    temp = dht.readTemperature();
	
    //print values
    Serial.print("Luftfeuchtigkeit: ");
    Serial.print(hum);
    Serial.print(" %, Temperatur: ");
    Serial.print(temp);
    Serial.println(" °C");
	
}