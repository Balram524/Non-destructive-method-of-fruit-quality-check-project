#include "SparkFun_AS7265X.h" // Click here to get the library: http://librarymanager/All#SparkFun_AS7265X
#include <LiquidCrystal.h>
#include <dht11.h>
#include <Wire.h>


#define DHT11_PIN A2
#define MQ3_PIN A1
#define MQ4_PIN A3
#define MQ135_PIN A0
#define MQ3 1
#define MQ4 2
#define ANALOGPIN A2 // Define Analog PIN on Arduino Board

dht11 DHT11;
AS7265X sensor;

int mq3Pin = MQ3_PIN;
int mq4Pin = MQ4_PIN;
int ledPin = 13;
int ledPin1 = 8;
int buzzer = 8 ;
int smokeA0 = A4;
int count = 0;
// Your threshold value
int sensorThres = 700;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int Contrast = 0;
const float MQ3_Ro = 10;
const float MQ4_Ro = 10;

// Function declaration outside the loop
float MQGetGasPercentage(float rs_ro_ratio, int gas_id);

void setup()
{
  Serial.begin(115200);
  Serial.println("AS7265x Spectral Triad Example");
  pinMode(1, INPUT_PULLUP);

  Serial.println("Point the Triad away and press a key to begin with illumination...");
  while (Serial.available() == false)
  {
  } 
  if (sensor.begin() == false)
  {
    Serial.println("Sensor does not appear to be connected. Please check wiring. Freezing...");
    while (1)
      ;
  }
  sensor.disableIndicator();

  Serial.println("A,B,C,D,E,F,G,H,R,I,S,J,T,U,V,W,K,L");
  analogWrite(6, Contrast);
  lcd.begin(16, 2);
  // Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
}

void loop()
{
  int chk = DHT11.read(DHT11_PIN);
  int mq3Value = analogRead(mq3Pin);
  int mq4Value = analogRead(mq4Pin);
  int analogSensor = analogRead(smokeA0);

  float mq3PPM = MQGetGasPercentage(mq3Value / MQ3_Ro, MQ3);
  float mq4PPM = MQGetGasPercentage(mq4Value / MQ4_Ro, MQ4);

  int val = digitalRead(1);
  if (val == 0)
  {
    count = count + 1;
  }

  sensor.takeMeasurementsWithBulb();  // This is a hard wait while all 18 channels are measured
  switch (count)
  {
  case 1:
    Serial.print(sensor.getCalibratedA()); // 410nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedB()); // 435nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedC()); // 460nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedD()); // 485nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedE()); // 510nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedF()); // 535nm
    Serial.print(",");


    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("410-535nm");
    delay(2000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(String(sensor.getCalibratedA()) + " " + String(sensor.getCalibratedB()) + " " + String(sensor.getCalibratedC()));
    lcd.setCursor(0, 1);
    lcd.print(String(sensor.getCalibratedD()) + " " + String(sensor.getCalibratedE()) + " " + String(sensor.getCalibratedF()));
    break;

  case 2:
    Serial.print(sensor.getCalibratedG()); // 560nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedH()); // 585nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedR()); // 610nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedI()); // 645nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedS()); // 680nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedJ()); // 705nm
    Serial.print(",");

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("560-705nm");
     delay(2000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(String(sensor.getCalibratedG()) + " " + String(sensor.getCalibratedH()) + " " + String(sensor.getCalibratedR()));
    lcd.setCursor(0, 1);
    lcd.print(String(sensor.getCalibratedI()) + " " + String(sensor.getCalibratedS()) + " " + String(sensor.getCalibratedJ()));
    break;

  case 3:
    Serial.print(sensor.getCalibratedT()); // 730nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedU()); // 760nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedV()); // 810nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedW()); // 860nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedK()); // 900nm
    Serial.print(",");
    Serial.print(sensor.getCalibratedL()); // 940nm
    Serial.print(",");


    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("730-940nm");
    delay(2000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(String(sensor.getCalibratedT()) + " " + String(sensor.getCalibratedU()) + " " + String(sensor.getCalibratedV()));
    lcd.setCursor(0, 1);
    lcd.print(String(sensor.getCalibratedW()) + " " + String(sensor.getCalibratedK()) + " " + String(sensor.getCalibratedL()));
    break;

  case 4:

    Serial.print("\tMQ3: ");
    Serial.print(mq3PPM);

    Serial.print("\tMQ4: ");
    Serial.print(mq4PPM);

    Serial.print("\tSmoke Level: ");
    Serial.println(analogSensor - 50);

    if (mq4Value > 20)
    {
      digitalWrite(ledPin, HIGH);
    }
    else
    {
      digitalWrite(ledPin, LOW);
    }

    if (mq3Value > 10)
    {
      digitalWrite(ledPin1, HIGH);
    }
    else
    {
      digitalWrite(ledPin1, LOW);
    }

    delay(1000);

    lcd.setCursor(0, 0);
    lcd.print("Meth (ppm):");
    lcd.print(mq4PPM);

    lcd.setCursor(0, 1);
    lcd.print("Alc (ppm):");
    lcd.print(mq3PPM);

    delay(1000);
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("H(%):");
    lcd.print((float)DHT11.humidity, 1);

    lcd.setCursor(0, 1);
    lcd.print("T(C):");
    lcd.print((float)DHT11.temperature, 0);
    delay(1000);
    lcd.clear();

    if (analogSensor - 50 > sensorThres)
    {
      lcd.setCursor(0, 0);
      lcd.print("Alert....!!!");
      tone(buzzer, 1000, 2000);
    }
    else
    {
      lcd.setCursor(0, 0);
      lcd.print(".....Normal.....");
      noTone(buzzer);
    }
    delay(1000);
    lcd.clear();

    break;

  case 5:
    val = digitalRead(0);
    lcd.clear();
    if (val == 1)
    {
      digitalWrite(13, HIGH); // LED ON
      lcd.print("obstacle detected");
      Serial.print("obstacle detected");
    }
    else
    {
      digitalWrite(13, LOW); // LED OFF
      lcd.print("no obstacle detected");
      Serial.print("no obstacle detected");
    }

    break;

  default:
    Serial.print("Operation ended");
    count = 0;
  }

  Serial.println();
}

float MQGetGasPercentage(float rs_ro_ratio, int gas_id)
{
  if (gas_id == MQ3)
  {
    return pow(10, ((log10(rs_ro_ratio) - 2.174) / (-0.357)));
  }
  else if (gas_id == MQ4)
  {
    return pow(10, ((log10(rs_ro_ratio) - 1.057) / (-0.47)));
  }
  return 0;
}
