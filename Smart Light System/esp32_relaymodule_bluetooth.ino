#include <BluetoothSerial.h>

BluetoothSerial SerialBT;

int lightbulb = 13;

void setup() {
  SerialBT.begin("Bluetooth Lightbulb Systemm");
  Serial.begin(115200);
  pinMode(lightbulb,OUTPUT);
  digitalWrite(lightbulb,LOW); //Ensure the lightbulb is OFF at the beginning
}

void loop() 
{   
/* ESP32 bluetooth detects whether the user is inputting via. terminal; whatever content typed will output
onto the computer's serial monitor (if connected to a computer running Arduino IDE or equivalent) */
  
  if (SerialBT.available()) { //Check if there is any input from smartphone/tablet (i.e. bluetooth serial device)
    int x = SerialBT.read(); //store whatever is read from the bluetooth serial device into variable 'x'
    Serial.write(x); //output variable 'x' on serial monitor

/* Using a Terminal-enabled app on Android (paired and connected to ESP32/ESP32S via. Bluetooth Classic), 
user inputs different characters corresponding with different light functions, e.g. inputting '1' and '0' 
via. Terminal on Android device turns the light on and off respectively. */
   
    if (char(x) == '0') {
      digitalWrite(lightbulb,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == '1') { 
      digitalWrite(lightbulb,HIGH);
      SerialBT.print("Light ON\n");
    }
}

}
