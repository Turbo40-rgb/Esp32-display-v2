#include <Arduino.h>
#include <U8g2lib.h> // knihovna pro display
#include <Wire.h>



U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE); // nasteveni registru



void setup(void) {
  u8g2.begin(); //inicializace
}

void loop(void) {
  u8g2.clearBuffer();					// vymze pamet displeye
  u8g2.setFont(u8g2_font_ncenB08_tr);	// pouziti fontu
  u8g2.drawStr(0,10,"Vcely");	// zapis na dane souradnice
  u8g2.sendBuffer();					// odesle data do interni pameti do displeye
  delay(1000);  
}
