#include <WiFi.h>

const char *ssid = "NAMA";
const char *password = "password123";

void setup(){
  Serial.begin(9600);
  WiFi.softAP(ssid,password);

  Serial.println();
  Serial.print("IP Address");
  Serial.println(WiFi.softAPIP());
}

void loop(){
  
}
