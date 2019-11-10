#ifndef ReflowWizard_Utility_H
#define ReflowWizard_Utility_H

#include <Arduino.h>

void secondsToEnglishString(char *str, uint32_t seconds);
char *secondsInClockFormat(char *str, uint32_t seconds);
void animateIcons(uint16_t x);

// Fixed BMP file header for screenshots
const char bmpHeader[54] PROGMEM = {
  0x42, 0x4d, 0x36, 0x8, 0x7, 0x0, 0x0, 0x0, 0x0, 0x0,
  0x36, 0x0, 0x0, 0x0, 0x28, 0x0, 0x0, 0x0, 0xe0, 0x1,
  0x0, 0x0, 0xC0, 0xFE, 0xFF, 0xFF, 0x1, 0x0, 0x18, 0x0,
  0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0x7, 0x0, 0x13, 0xb,
  0x0, 0x0, 0x13, 0xb, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
  0x0, 0x0, 0x0, 0x0
};

void takeScreenshot();
uint32_t getFreeRAM();
void checkFreeMemory();

#endif