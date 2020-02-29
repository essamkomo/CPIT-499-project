#include "myesp.h" 


void setup() {
WIFI esp ;
String net_SSID = "END" ;
String net_PASSWORD = "MasterEND" ;
  esp.set_SSID(net_SSID);
   esp.set_password(net_PASSWORD);
  
 Serial.begin(9600);
esp.connection();

}

void loop() {
 
}
