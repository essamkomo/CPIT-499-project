
#include <ESP8266WiFi.h> 

class WIFI{
  String NET_SSID = "";
  String NET_PASSWORD = "";
  
 
  public :
 void connection(){
    
  // connect to wifi.
  WiFi.begin(NET_SSID, NET_PASSWORD);
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
  Serial.println(NET_SSID);
   }

   void set_SSID(String ssid){
 NET_SSID = ssid ;  
}

void set_password(String  password){
 NET_PASSWORD = password; 
}

};


