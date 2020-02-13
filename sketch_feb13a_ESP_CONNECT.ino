#include <ESP8266WiFi.h> 
 // the create variable for  the network SSID 
 
 String NetSSID = "mynetwork"; 

 // the create variable for  the network password 
  
 String Password = "mypassword"; // 
 void setup() { 
  Serial.begin(115200);
  // Connect to WiFi
  WiFi.begin(NetSSID, password);

  // infnite loop that if the connection is not 
  while (true) 
  
  { 
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
  Serial.println(NetSSID);
delay(500);
}

  /*
Serial.begin(11000) ; 
Serial.print("try to connect to WIFI"); 
WiFi.begin(netSSID,Password); 
*/

/*
while(WiFi.status != WL_CONNECTED)){
 Serial.println("NOT CONNECTED YET ");  

delay(1000);
if(WiFi.status == WL_CONNECTED ){
  Serial.println("CONNECTED to wifi " + netSSID );  
  Serial.println(WiFi.localIP());
    
break; 
}

}

}*/

void loop() {

  
}
