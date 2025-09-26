#define BLYNK_TEMPLATE_ID "TMPL69lZ6MxR9"
#define BLYNK_TEMPLATE_NAME "Gas Sensor"
#define BLYNK_AUTH_TOKEN "write your own AUTH from the BYLNK"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Write the name of network";
char pass[] = "write the password";

int gasSensor = 34;
int buzzer = 2;

BlynkTimer timer;

void sendSensorData() {
  int sensorValue = analogRead(gasSensor);    // or whatever pin you're using
  float gasValue = map(sensorValue, 0, 4095, 0, 100);
  Serial.print("Sensor Value: ");
  Serial.println(gasValue);
  Blynk.virtualWrite(V0, gasValue);
  if (gasValue>=40) {
   Blynk.logEvent("gas_alarm", "⚠️ High Gas Level");
   digitalWrite(buzzer, HIGH);
  }
  else{
    digitalWrite(buzzer, LOW);
  }
}

  
void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
 Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
 pinMode(gasSensor, INPUT);
 pinMode(buzzer, OUTPUT);
 timer.setInterval(1000L, sendSensorData);
}

void loop() {
  // put your main code here, to run repeatedly:
 Blynk.run();
 timer.run();
}
