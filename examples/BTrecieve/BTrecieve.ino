/*Aspro Company
 * Eng:Amir Salama
 * https://www.youtube.com/@amirsalama9928/videos
 * https://www.facebook.com/groups/2187431451581099
 * https://www.facebook.com/profile.php?id=100091664624422
 */
#include "Aspro_GeneralShield.h"

  Aspro_shield sh;
  String rc="";
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
   rc=sh.BTread(); 
   if(rc!=""){
    Serial.print("rc=");
    Serial.println(rc);
    sh.BTwrite("data");
   }
   //if receive string data convert it to int or double 
   //Arduino ide programming||string to int and double 
    //-->watch video
   //https://www.youtube.com/watch?v=mpYNYKd5_-g&t=231s
}
