/*Aspro Company 
 * Eng:Amir Salama
 * https://www.youtube.com/@amirsalama9928/videos
 * https://www.facebook.com/groups/2187431451581099
 * https://www.facebook.com/profile.php?id=100091664624422
 */
#include "Aspro_GeneralShield.h"
#include <Arduino.h>
  #include <SoftwareSerial.h>
  #include <SPI.h>
  #include <nRF24L01.h>
  #include <RF24.h>
  
  Aspro_shield sh;
  String rc="";
void setup()
{
  /*Note: nrf24l01 use Arduino pin D9,D10,D11,D12,D13
   * turn on switch S8,S9,S10,S11,S12,S13,S14
   */
    Serial.begin(9600);
    sh.NRFReadbegin();
}

void loop()
{
  //read String data
   rc=sh.NRFread(); 
   if(rc!=""){
    Serial.print("rc=");
   Serial.println(rc);
   }
   //if receive string data convert it to int or double 
   //Arduino ide programming||string to int and double 
    //-->watch video
   //https://www.youtube.com/watch?v=mpYNYKd5_-g&t=231s
}
