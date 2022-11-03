
#define _MAIN_C_

#include <Arduino.h>

#ifndef DGIT_REV
#define DGIT_REV "GIT_REV"
#endif

#ifndef CPPDEF_GLOBAL
#define CPPDEF_GLOBAL "CPPDEF_GLOBAL"
#endif

#ifndef CPPDEF_PROJECT
#define CPPDEF_PROJECT "CPPDEF_PROJECT"
#endif

void setup() { Serial.begin(115200); }

void loop() {
  Serial.printf("git : %s\n", DGIT_REV);
  Serial.printf("glob: %s\n", CPPDEF_GLOBAL);
  Serial.printf("proj: %s\n", CPPDEF_PROJECT);
  
  delay(4000);
}
