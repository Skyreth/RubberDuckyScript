#include "Keyboard.h"

void setup() {
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
  delay(500);
  Keyboard.press('r');
  Keyboard.releaseAll();

  Keyboard.print("cmd");
  processKey(KEY_INSERT);

  Keyboard.print("start msedge https://fakeupdate.net/win10ue/");
  processKey(KEY_INSERT);

  processKey(KEY_F10);
}

void loop() {

}
