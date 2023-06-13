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

void setup()
{
   /*Note: nrf24l01 use Arduino pin D9,D10,D11,D12,D13
   * turn on switch S8,S9,S10,S11,S12,S13,S14
   */
    Serial.begin(9600);
    sh.NRFWritebegin();
}

void loop()
{
   sh.NRFwriteChar('y'); 
   delay(1000);
   sh.NRFwriteChar('c'); 
   delay(1000);
   sh.NRFwriteString("text"); 
   delay(1000);
   sh.NRFwriteString("ddddd"); 
   delay(1000);
   //if send int or double data convert it to string
   //Arduino ide programming||convert from int and double to string
    //-->watch video
    //https://www.youtube.com/watch?v=VJkQC2B0LxI&t=18s
}
