#include <Arduino.h>

#include "clogger/clogger.h"

void setup() {
  CLOGI();
}

void loop() {
  CLOGI("test");
  delay(500);
}