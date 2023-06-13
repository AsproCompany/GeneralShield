/*
 Name:		GeneralShield.h
 Created:	6/13/2023 5:59:46 PM
 Author:	Amir Salama
 Editor:	https://www.youtube.com/@amirsalama9928/videos
*/

#ifndef _Aspro_GeneralShield_h
#define _Aspro_GeneralShield_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#include <SoftwareSerial.h>
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#endif
class Aspro_shield {

private:
    byte m01 = A1;
    byte m11 = A2;
    byte m02 = A3;
    byte m12 = A4;
    byte m03 = 6;
    byte m13 = 7;
    byte m04 = A0;
    byte m14 = 8;

public:
    Aspro_shield();

    void espBegin(double r);
    void espWrite(String wr);
    String espReadStringUntil(char u);

    void NRFReadbegin();
    void NRFWritebegin();
    String NRFread();
    void NRFwriteChar(char wr);
    void NRFwriteString(String wr);

    void BTbegin(double r);
    void BTwrite(String wr);
    String BTread();

    void StartM1();
    void M1forward();
    void M1backward();
    void M1stop();

    void StartM2();
    void M2forward();
    void M2backward();
    void M2stop();

    void StartM3();
    void M3forward();
    void M3backward();
    void M3stop();

    void StartM4();
    void M4forward();
    void M4backward();
    void M4stop();
};

#endif

