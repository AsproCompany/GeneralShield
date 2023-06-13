/*
 Name:		GeneralShield.cpp
 Created:	6/13/2023 5:59:46 PM
 Author:	Amir Salama
 Editor:	https://www.youtube.com/@amirsalama9928/videos
*/

#include "Aspro_GeneralShield.h"
#include <Arduino.h>
#include <SoftwareSerial.h>
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

SoftwareSerial BTSerial(2, 3); // TX/RX pins
SoftwareSerial wifiSerial(5, 4); // TX/RX pins
RF24 radio(9, 10); // CE, CSN
const byte address[6] = "00001";

Aspro_shield::Aspro_shield()
{

}
void Aspro_shield::espBegin(double r)
{
    wifiSerial.begin(r);
}
String Aspro_shield::espReadStringUntil(char u)
{
    String rc;
    if (wifiSerial.available()) {
        rc = wifiSerial.readStringUntil(u);
    }
    return rc;
}
void Aspro_shield::espWrite(String wr)
{
    wifiSerial.print(wr);
}
void Aspro_shield::BTbegin(double r)
{
    BTSerial.begin(r);
}
String Aspro_shield::BTread()
{
    String rc;
    while (BTSerial.available()) {
        delay(1);
        if (BTSerial.available()) {
            char c = BTSerial.read();
            rc += c;
        }
    }
    return rc;
}
void Aspro_shield::BTwrite(String wr)
{
    BTSerial.println(wr);
}
void Aspro_shield::NRFReadbegin()
{
    radio.begin();
    radio.openReadingPipe(0, address);
    radio.setPALevel(RF24_PA_MIN);
    radio.startListening();
}
void Aspro_shield::NRFWritebegin()
{
    radio.begin();
    radio.openWritingPipe(address);
    radio.setPALevel(RF24_PA_MIN);
    radio.stopListening();
}
String Aspro_shield::NRFread()
{
    String rc;
    if (radio.available()) {
        char text[32] = "";
        radio.read(&text, sizeof(text));
        char ch[32];
        String rc = text;
        rc.toCharArray(ch, 32);
        return rc;
    }
}
void Aspro_shield::NRFwriteChar(char wr)
{
    char text[1];
    text[0] = wr;
    radio.write(&text, sizeof(text));
}
void Aspro_shield::NRFwriteString(String wr)
{
    char ch[32];
    wr.toCharArray(ch, 50);
    radio.write(&ch, sizeof(ch));
}
void Aspro_shield::StartM1()
{
    pinMode(m01, OUTPUT);
    pinMode(m11, OUTPUT);
}
void Aspro_shield::M1forward()
{
    digitalWrite(m01, 1);
    digitalWrite(m11, 0);
}
void Aspro_shield::M1backward()
{
    digitalWrite(m01, 0);
    digitalWrite(m11, 1);
}
void Aspro_shield::M1stop()
{
    digitalWrite(m01, 0);
    digitalWrite(m11, 0);
}
void Aspro_shield::StartM2()
{
    pinMode(m02, OUTPUT);
    pinMode(m12, OUTPUT);
}
void Aspro_shield::M2forward()
{
    digitalWrite(m02, 1);
    digitalWrite(m12, 0);
}
void Aspro_shield::M2backward()
{
    digitalWrite(m02, 0);
    digitalWrite(m12, 1);
}
void Aspro_shield::M2stop()
{
    digitalWrite(m02, 0);
    digitalWrite(m12, 0);
}
void Aspro_shield::StartM3()
{
    pinMode(m03, OUTPUT);
    pinMode(m13, OUTPUT);
}

void Aspro_shield::M3forward()
{
    digitalWrite(m03, 1);
    digitalWrite(m13, 0);
}
void Aspro_shield::M3backward()
{
    digitalWrite(m03, 0);
    digitalWrite(m13, 1);
}
void Aspro_shield::M3stop()
{
    digitalWrite(m03, 0);
    digitalWrite(m13, 0);
}
void Aspro_shield::StartM4()
{
    pinMode(m04, OUTPUT);
    pinMode(m14, OUTPUT);
}
void Aspro_shield::M4forward()
{
    digitalWrite(m04, 1);
    digitalWrite(m14, 0);
}
void Aspro_shield::M4backward()
{
    digitalWrite(m04, 0);
    digitalWrite(m14, 1);
}
void Aspro_shield::M4stop()
{
    digitalWrite(m04, 0);
    digitalWrite(m14, 0);
}

