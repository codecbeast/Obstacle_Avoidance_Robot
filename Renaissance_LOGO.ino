#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>
 

#define OLED_RESET -1
Adafruit_SH1106 display(OLED_RESET);
 
void setup() {
  Serial.begin(115200);
  display.begin(SH1106_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.fillRect(54, 2, 7, 3, WHITE);
  display.fillRect(54, 5, 3, 4, WHITE);
  display.fillCircle(55, 13, 1, WHITE);
  display.fillRect(54, 18, 3, 4, WHITE);
  display.fillRect(54, 25, 3, 4, WHITE);
  display.fillRect(54, 29, 7, 3, WHITE);
  display.fillRect(67, 2, 7, 3, WHITE);
  display.fillRect(71, 5, 3, 4, WHITE);
  display.fillRect(71, 12, 3, 4, WHITE);
  display.fillRect(71, 25, 3, 4, WHITE);
  display.fillRect(67, 29, 7, 3, WHITE);
  display.fillCircle(72, 20, 1, WHITE);
  display.display();
  delay(2000);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(28,36);
  display.print("RENAISSANCE");
  display.display();
  delay(2000);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(16,47);
  display.print("INNOVATION LABS");
  display.display();
}

void loop() {
  // put your main code here, to run repeatedly:
  /*display.clearDisplay();
  display.fillRect(54, 2, 7, 3, WHITE);
  display.fillRect(54, 5, 3, 4, WHITE);
  display.fillCircle(55, 13, 1, WHITE);
  display.fillRect(54, 18, 3, 4, WHITE);
  display.fillRect(54, 25, 3, 4, WHITE);
  display.fillRect(54, 29, 7, 3, WHITE);
  display.fillRect(67, 2, 7, 3, WHITE);
  display.fillRect(71, 5, 3, 4, WHITE);
  display.fillRect(71, 12, 3, 4, WHITE);
  display.fillRect(71, 25, 3, 4, WHITE);
  display.fillRect(67, 29, 7, 3, WHITE);
  display.fillCircle(72, 20, 1, WHITE);
  display.display();
  delay(2000);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(28,36);
  display.print("RENAISSANCE");
  display.display();
  delay(2000);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(16,47);
  display.print("INNOVATION LABS");
  display.display();*/
}
