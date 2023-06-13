/*Aspro Company
 * Eng:Amir Salama
 * https://www.youtube.com/@amirsalama9928/videos
 * https://www.facebook.com/groups/2187431451581099
 * https://www.facebook.com/profile.php?id=100091664624422
 */
#include "Aspro_GeneralShield.h"
#include <SoftwareSerial.h>

  Aspro_shield sh;
  
void setup()
{
   /*Note: esp8266-01 use Arduino pin D4,D5
   * turn on switch S5,S6,S7,S8
   */
    Serial.begin(9600);
    sh.espBegin(115200);
}

void loop()
{
    sh.espWrite("tdata#");
    delay(1000);
    sh.espWrite("t5464556#");
    delay(1000);
  
   //if send int or double data convert it to string
   //Arduino ide programming||convert from int and double to string
    //-->watch video
    //https://www.youtube.com/watch?v=VJkQC2B0LxI&t=18s
}
