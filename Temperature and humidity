#include <dht.h>
#include "ESP8266WiFi.h"
#define dht_pin D0
const char* ssid = "nithin";
const char* password = "12345678";
dht DHT;
WiFiServer server(80); 

void setup() {
  wifi_connect();
  
  
  
  server.begin();
  Serial.println("Web Server Started");
  
  Serial.print("Connect to the Server: ");
  Serial.print("http://");
  Serial.print(WiFi.localIP());
  Serial.println();
  Serial.println();
  
}


void loop() {
  // put your main code here, to run repeatedly:
  DHT.read11(dht_pin);
  WiFiClient client = server.available();
  if (!client) {
    return;
  }
  
  String request = client.readStringUntil('\r');
  Serial.println(request);
  client.flush();

  
    
  client.flush();
  
  client.println("HTTP/1.1 200 OK"); 
  client.println("Content-Type: text/html");
  client.println("");
  client.println("<!DOCTYPE HTML>");
    
  client.println("<style>");
  client.println("body {background-color: #8baee8;}"); 
  client.println("</style>");
  client.println("<meta http-equiv=\"refresh\" content=\"3\">");
  client.println("<h1>temperature</h1>");
   client.println("<br><br><br>");
  client.println(DHT.temperature); 
   client.println("<h2>humidity</h2>");
  client.println("<br><br><br>");
    client.println(DHT.humidity);
  delay(3000);
      
 
  client.println("</html>");
  

}/*-----------------------void loop ends here------------------------------------*/

void wifi_connect(void){
  
  Serial.begin(115200);
  delay(10);
  
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(250);
    Serial.print(".");
  }
  
  Serial.println("");
  Serial.println("WiFi connected");  
}
