/*************************************************************
  
  Blynk Robotic Arm Controller based on Blynk Servo sketch. 
  Connects an Arduino phone to the robotic arm.
  Servos are controlled with sliders.
  By Aaron Price
  Version 1.0
  
  
   Blynk is a platform with iOS and Android apps to control
  Arduino, Raspberry Pi and the likes over the Internet.
  You can easily build graphic interfaces for all your
  projects by simply dragging and dropping widgets.

    Downloads, docs, tutorials: http://www.blynk.cc
    Blynk community:            http://community.blynk.cc
    Social networks:            http://www.fb.com/blynkapp
                                http://twitter.com/blynk_app

  Blynk library is licensed under MIT license
  This example code is in public domain.

 *************************************************************
  This example shows how to use Arduino with HC-06/HC-05
  Bluetooth 2.0 Serial Port Profile (SPP) module
  to connect your project to Blynk.

  Note: This only works on Android! iOS does not support SPP :(
        You may need to pair the module with your smartphone
        via Bluetooth settings. Default pairing password is 1234

 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <BlynkSimpleSerialBLE.h>
#include <SoftwareSerial.h>
#include <Servo.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "e7c17d6a8ae446cab9975d01d35e46af";

SoftwareSerial SerialBLE(10, 11); // RX, TX

Servo baseServo, forwardServo, upServo, clawServo;

BLYNK_WRITE(V3)
{
  baseServo.write(param.asInt());
}
BLYNK_WRITE(V4)
{
  forwardServo.write(param.asInt());
}
BLYNK_WRITE(V5)
{
  upServo.write(param.asInt());
}
BLYNK_WRITE(V6)
{
  clawServo.write(param.asInt());
}
void setup()
{
  // Debug console
  Serial.begin(9600);

  SerialBLE.begin(9600);
  Blynk.begin(SerialBLE, auth);

  Serial.println("Waiting for connections...");

  baseServo.attach(6);
  forwardServo.attach(7);
   upServo.attach(8);
  clawServo.attach(9);

  baseServo.write(0);
  forwardServo.write(0);
   upServo.write(0);
  clawServo.write(0);

}

void loop()
{
  Blynk.run();
}
