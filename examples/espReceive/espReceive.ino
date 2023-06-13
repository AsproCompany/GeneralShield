/*Aspro Company
 * Eng:Amir Salama
 * https://www.youtube.com/@amirsalama9928/videos
 * https://www.facebook.com/groups/2187431451581099
 * https://www.facebook.com/profile.php?id=100091664624422
 */
#include "Aspro_GeneralShield.h"
#include <SoftwareSerial.h>

  Aspro_shield sh;
  String rc="";
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
   rc=sh.espReadStringUntil('#'); //Data must end with #
   if(rc!=""){
    Serial.print("rc=");
    Serial.println(rc);
   }
   //if receive string data convert it to int or double 
   //Arduino ide programming||string to int and double 
    //-->watch video
   //https://www.youtube.com/watch?v=mpYNYKd5_-g&t=231s
}
