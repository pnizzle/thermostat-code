
#//define setTemp  
#include <DHT.h>
#include <DHT_U.h>
#include <Adafruit_Sensor.h>
#define DHTPIN   2
#define DHTTYPE   DHT22
DHT_Unified dht(DHTPIN, DHTTYPE);
uint32_t delayMS;

const int ledPin1 = 13;
const int airCpin = 12;
const int heatP = 11;
const int fanP = 10;
const int dlyP = 3000;
//int setTemp = static;
//int x = 72;  #remove after testing
const int buttonPinUP = 15;
const int buttonPinDN = 16;

//#temp conversion method
int centToFaren(dht(event.temperature))
{
int degF = dht(event.temperature) *9 /5 +32;
return(degF);
}

//#setTemp method deg F +-1
{
}

void setup ()

//#//start serial and run conversion for degF from degC and print to serial
//#serial start up method confirms and info
//#// set all output pins modes
{  
  dht.begin();
  Serial.println("DHT started");
sensor_t sensor;
dht.temperature().getSensor(&sensor);
  delayMS = sensor.min_delay / 1000;

  
    pinMode(ledPin1, OUTPUT);
  pinMode(airCpin, OUTPUT);
  pinMode(heatP, OUTPUT);
  pinMode(fanP, OUTPUT);
  pinMode(buttonPin+, INPUT_PULLUP);
  pinMode(buttonPin-, INPUT_PULLUP);
  Serial.begin(115200); 
    Serial.println(degF "F Indoor Temperature.");
  Serial.println("Thermostat PinModes set");
  }
//#// set pins to begin off except ledPin1 to show power on
{
  pinMode(ledPin1, HIGH);
  pinMode(airCpin, LOW);
  pinMode(heatP, LOW);
  pinMode(fanP, LOW);
  }
//#check temp function methods 
  {
  int inputPin = digitalRead(buttonPinDN);
  int inputPin = digitalRead(buttonPinUP);
  Serial.println(buttonPinDN);
  if (buttonPinDN == HIGH)
  {setTemp = setTemp++();}
  else{ 
   break;
  }
  if (buttonPinDN == HIGH){
    setTemp = setTemp - 1
  }
  
  Serial.println("set temperature up 1 deg.")
  }
void loop ()
{
 // int currentTemp (DHT22,(event.temperature));
delay(delayMS);
sensors_event_t event;
dht.temperature();getEvent(&event);
if (isnan(event.temperature)){
Serial.println("Error with sensor");}
else {
Serial.print("Temperature: ");
Serial.print(event.temperature);
Serial.println(" *C");	
}

//#cool function  
{
   if(currentTemp > setTemp + 3)
{
  digitalWrite(airCpin, HIGH);
  delay(dlyP);
  digitalWrite(fanP, HIGH);
}
 else break()
 {
 }
//#heat fuction

if(currentTemp < setTemp - 3)
{
  digitalWrite(heatP, HIGH);
  delay(dlyP);
  digitalWrite(fanP, HIGH);
}   
}
