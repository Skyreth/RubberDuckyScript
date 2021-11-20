#include "Keyboard.h"

void setup()
{
  Keyboard.begin();
  delay(1000);
  runscript();
  Keyboard.end();
}

void processKey(int key) {
  Keyboard.press(key);
  delay(500);
  Keyboard.release(key);
}

void runscript() {
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(500);
  Keyboard.releaseAll();

  Keyboard.print("cmd");
  processKey(KEY_RETURN);

  Keyboard.print("shutdown /s");
  processKey(KEY_RETURN);
}

void loop() {

}
