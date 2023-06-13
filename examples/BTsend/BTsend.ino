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
   /*Note: bluetooth hc-05 use Arduino pin D2,D3
   * turn on switch S1,S2,S3,S4
   */
    Serial.begin(9600);
    sh.BTbegin(9600);
}

void loop()
{ 
   sh.BTwrite("my_data");
   delay(1000);
   //if send int or double data convert it to string
   //Arduino ide programming||convert from int and double to string
    //-->watch video
    //https://www.youtube.com/watch?v=VJkQC2B0LxI&t=18s
}
