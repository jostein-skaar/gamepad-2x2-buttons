#define LAYOUT_NORWEGIAN

#include <Arduino.h>
#include <DigiKeyboard.h>
#include <OneButton.h>

OneButton button1A(0, false, false);
OneButton button1B(1, false, false);
OneButton button2A(2, false, false);
OneButton button2B(5, false, false);

void setup() {
  button1A.attachClick([]() { DigiKeyboard.sendKeyStroke((byte)KEY_A); });
  button1B.attachClick([]() { DigiKeyboard.sendKeyStroke((byte)KEY_D); });
  button2A.attachClick(
      []() { DigiKeyboard.sendKeyStroke((byte)KEY_LEFT_ARROW); });
  button2B.attachClick(
      []() { DigiKeyboard.sendKeyStroke((byte)KEY_RIGHT_ARROW); });
}

void loop() {
  DigiKeyboard.update();
  button1A.tick();
  button1B.tick();
  button2A.tick();
  button2B.tick();
}