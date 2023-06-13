/*Aspro Company 
 * Eng:Amir Salama
 * https://www.youtube.com/@amirsalama9928/videos
 * https://www.facebook.com/groups/2187431451581099
 * https://www.facebook.com/profile.php?id=100091664624422
 */
#include "Aspro_GeneralShield.h"

 Aspro_shield sh;

void setup() {
  /*Note: Dc Motor1 use Arduino pin A1 and A2
   * turn on switch S19 , S20
   */
   sh.StartM1();
   /*Note: Dc Motor2 use Arduino pin A3 and A4
   * turn on switch S21 , S22
   */
   sh.StartM2();
   /*Note: Dc Motor3 use Arduino pin D6 and D7
   * turn on switch S16 , S17
   */
   sh.StartM3();
   /*Note: Dc Motor4 use Arduino pin D8 and A0
   * turn on switch S16 , S17
   */
   sh.StartM4();
}

void loop() {
  sh.M1forward();
  sh.M2forward();
  sh.M3forward();
  sh.M4forward();
  delay(2000);
  sh.M1stop();
  sh.M2stop();
  sh.M3stop();
  sh.M4stop();
  delay(1000);
  sh.M1backward();
  sh.M2backward();
  sh.M3backward();
  sh.M4backward();
  delay(2000);
  sh.M1stop();
  sh.M2stop();
  sh.M3stop();
  sh.M4stop();
  delay(1000);
  //in this virsion (v1) not support motor speed (pwm)
}
