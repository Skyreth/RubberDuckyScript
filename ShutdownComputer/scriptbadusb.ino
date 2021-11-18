#include "Keyboard.h"

void setup()
{
  Keyboard.begin();
  delay(1000);
  runscript();
  Keyboard.end();
}

void runscript() {
  Keyboard.press(KEY_LEFT_GUI);
  delay(500);
  Keyboard.press('r');
  Keyboard.releaseAll();

  Keyboard.print("cmd");
  Keyboard.press(KEY_INSERT);
  delay(500);

  Keyboard.print("shutdown /s");
  Keyboard.press(KEY_INSERT);
  delay(500);
}

void loop() {

}
