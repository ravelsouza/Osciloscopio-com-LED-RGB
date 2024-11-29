#include <Adafruit_NeoPixel.h>

#define d 10

int coluna = 0;

// Define os LEDs
Adafruit_NeoPixel led2 = Adafruit_NeoPixel(12, 2, NEO_GRB+NEO_KHZ800);
Adafruit_NeoPixel led3 = Adafruit_NeoPixel(12, 3, NEO_GRB+NEO_KHZ800);
Adafruit_NeoPixel led4 = Adafruit_NeoPixel(12, 4, NEO_GRB+NEO_KHZ800);
Adafruit_NeoPixel led5 = Adafruit_NeoPixel(12, 5, NEO_GRB+NEO_KHZ800);
Adafruit_NeoPixel led6 = Adafruit_NeoPixel(12, 6, NEO_GRB+NEO_KHZ800);
Adafruit_NeoPixel led7 = Adafruit_NeoPixel(12, 7, NEO_GRB+NEO_KHZ800);
Adafruit_NeoPixel led8 = Adafruit_NeoPixel(12, 8, NEO_GRB+NEO_KHZ800);
Adafruit_NeoPixel led9 = Adafruit_NeoPixel(12, 9, NEO_GRB+NEO_KHZ800);
Adafruit_NeoPixel led10 = Adafruit_NeoPixel(12, 10, NEO_GRB+NEO_KHZ800);
Adafruit_NeoPixel led11 = Adafruit_NeoPixel(12, 11, NEO_GRB+NEO_KHZ800);

void setup() {
  // Inicializa os LEDs
  led2.begin();
  led3.begin();
  led4.begin();
  led5.begin();
  led6.begin();
  led7.begin();
  led8.begin();
  led9.begin();
  led10.begin();
  led11.begin();
}

void loop() {
  float a=255, b=0, c=0, e=0, f=0, g=0, var = 0, i = 0;
  int j=0, linha=0;
  for(coluna = 2; coluna < 12; coluna++)
  {
  var = analogRead(A0);
  i = linhaDefine(var);
  if(coluna == 2)
 {
   led2.setPixelColor(i, led2.Color(a,b,c));
   led2.show();
   delay(d);
   var = analogRead(A0);
   i = linhaDefine(var);
   led2.setPixelColor(i+6, led2.Color(a,b,c));
   led2.show();
  }
 else if(coluna == 3)
 {
   led3.setPixelColor(i, led3.Color(a,b,c));
   led3.show();
   delay(d);
   var = analogRead(A0);
   i = linhaDefine(var);
   led3.setPixelColor(i+6, led3.Color(a,b,c));
   led3.show();
 }
 else if(coluna == 4)
 {
   led4.setPixelColor(i, led4.Color(a,b,c));
   led4.show();
   delay(d);
   var = analogRead(A0);
   i = linhaDefine(var);
   led4.setPixelColor(i+6, led4.Color(a,b,c));
   led4.show();
 }
 else if(coluna == 5)
 {
   led5.setPixelColor(i, led5.Color(a,b,c));
   led5.show();
   delay(d);
   var = analogRead(A0);
   i = linhaDefine(var);
   led5.setPixelColor(i+6, led5.Color(a,b,c));
   led5.show();
 }
 else if(coluna == 6)
 {
   led6.setPixelColor(i, led6.Color(a,b,c));
   led6.show();
   delay(d);
   var = analogRead(A0);
   i = linhaDefine(var);
   led6.setPixelColor(i+6, led6.Color(a,b,c));
   led6.show();
 }
 else if(coluna == 7)
 {
   led7.setPixelColor(i, led7.Color(a,b,c));
   led7.show();
   delay(d);
   var = analogRead(A0);
   i = linhaDefine(var);
   led7.setPixelColor(i+6, led7.Color(a,b,c));
   led7.show();
 }
 else if(coluna == 8)
 {
   led8.setPixelColor(i, led8.Color(a,b,c));
   led8.show();
   delay(d);
   var = analogRead(A0);
   i = linhaDefine(var);
   led8.setPixelColor(i+6, led8.Color(a,b,c));
   led8.show();
 }
 else if(coluna == 9)
 {
   led9.setPixelColor(i, led9.Color(a,b,c));
   led9.show();
   delay(d);
   var = analogRead(A0);
   i = linhaDefine(var);
   led9.setPixelColor(i+6, led9.Color(a,b,c));
   led9.show();
 }
 else if(coluna == 10)
 {
   led10.setPixelColor(i, led10.Color(a,b,c));
   led10.show();
   delay(d);
   var = analogRead(A0);
   i = linhaDefine(var);
   led10.setPixelColor(i+6, led10.Color(a,b,c));
   led10.show();
 }
 else if(coluna == 11)
 {
   led11.setPixelColor(i, led11.Color(a,b,c));
   led11.show();
   delay(d);
   var = analogRead(A0);
   i = linhaDefine(var);
   led11.setPixelColor(i+6, led11.Color(a,b,c));
   led11.show();
 }
  delay(d);
}
  led2.clear();
  led3.clear();
  led4.clear();
  led5.clear();
  led6.clear();
  led7.clear();
  led8.clear();
  led9.clear();
  led10.clear();
  led11.clear();
}

int linhaDefine(float var)
{
 if(var >=0 && var < 170.5)
 {
   return 0;
 }
 else if(var >= 170.5 && var < 341)
 {
   return 1;
 }
 else if(var >= 341 && var < 511)
 {
   return 2;
 }
 else if(var >=511 && var < 681.5)
 {
   return 3;
 }
 else if(var >=681.5 && var < 852)
 {
   return 4;
 }
 else if(var >=852 && var < 1024)
 {
   return 5;
 }
}

int ledDefine(int x, int y)
{
 int a = 10*x + y;
 return a;
}
