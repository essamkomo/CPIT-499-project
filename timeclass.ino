#include <ESP8266WiFi.h>
#include <time.h>

// ssid of wifi
const char* ssid = "END";

// password 
const char* password = "MasterEND";

// conversion for the time based on the time zone 
int timezone = 3 * 3600;



void setup() {
  

  Serial.begin(115200);
  Serial.println();
  Serial.print("Wifi connecting to ");
  Serial.println( ssid );

  WiFi.begin(ssid,password);

  Serial.println();
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


  Serial.println("Wifi Connected Success!");
  Serial.print("NodeMCU IP Address : ");
  Serial.println(WiFi.localIP() );


  // connect to the  NTP server to get response of the time  
  configTime(timezone, 0, "pool.ntp.org");

  
  Serial.println("\nWaiting for Internet time");

  while(true){
    if(time(NULL)){
       Serial.print("break from the loop");
       break;
    }
    
     Serial.print("*");
    delay(1000);
  
  }
  
  Serial.println("\nTime response....OK");   
}

void loop() {
  struct tm*  CUR_TIME;
  time_t now = time(NULL);
  CUR_TIME = localtime(&now);
  int minutes= CUR_TIME->tm_min ;
  Serial.print(CUR_TIME->tm_mday);
  Serial.print("/");
  Serial.print(CUR_TIME->tm_mon + 1);
  Serial.print("/");
  Serial.print(CUR_TIME->tm_year + 1900);
  
  Serial.print(" ");
  
  Serial.print(CUR_TIME->tm_hour);
  Serial.print(":");
  Serial.print(minutes);
  Serial.print(":");
  Serial.println(CUR_TIME->tm_sec);
  
  delay(1000);

}
