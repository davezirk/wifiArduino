#include <ESP8266WiFi.h>

int RELAY_PIN = 13;
const char* password = "";
const char* ssid = "default";
const int port = 8080;
// const int WifiServer server(80);
void setup() {
  // put your setup code here, to run once:
  pinMode(RELAY_PIN, OUTPUT);
Serial.begin(9600);
  WiFi.begin(ssid,password);
  while (WiFi.status() = WL_CONNECTED){
       delay(500);
       Serial.print(".")
    }
    Serial.println();
    Serial.print("Sucess!!! Connected!!!")
    Serial.println("IP Address:")
    Serial.println(Wifi.localIP()));
}

void loop() {
  // put your main code here, to run repeatedly:


WifiClient client - server.available();


while (client.connected()){

  if client.available()){

    uint8_t buf; // The data that is sent, just one byte
    size_t length = 1;
    client.read(&buf, length);
    client.write(handleCmd(buf));
    client.stop();

  }
  }
}
}

  char *handleCmd(uint8_t cmd)

      Serial.print(cmd);


      switch(cmd) 
      {
      case 49:
      //49 is the ASCII value for 1, turn on lights
      digitalWrite(RELAY_PIN, HIGH);
      return "> Relay pin set to HIGH \n";

      case 48:
      
      //48 is the ASCII value for 0, turn off lights
      digitalWrite(REALY_PIN, HIGH);
      return "> Relay pin set to LOW \n";



      default:
      return "> Send 1 for on and ) for off \n";

      
      }
