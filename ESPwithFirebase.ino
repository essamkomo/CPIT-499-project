
#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

#define FIREBASE_HOST "tutorial-38808.firebaseio.com"
#define FIREBASE_AUTH "4PBg7pSiVsk5DAR8IFvKQAtRFsctehMsXJEvu5Ei"
#define WIFI_SSID "END"
#define WIFI_PASSWORD "MasterEND"

void setup() {
  Serial.begin(9600);

  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
 // infnite loop that if the connection is not 
  while (true){ 
    if(WiFi.status() == WL_CONNECTED){
     Serial.println(" ");
     Serial.println(" ");
     Serial.println("WiFi connection Successful");
  
   break;   
   }
     delay(500);
     Serial.print("*");
  }
 
  Serial.println("The IP Address of ESP8266 Module is: ");
  Serial.println(WiFi.localIP());// Print the IP address 
  Serial.println(WIFI_SSID);
    Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);


}



int n = 0;

void loop() {
  n++;
  
   if(Firebase.failed()){
    Serial.print("failed:");
  

  }else{
   Serial.println(n);

  Serial.print("pillname: ");
  Firebase.setInt("status",n);
  Serial.println(Firebase.getString("essam/pill"));
  delay(3000);
  }
}
