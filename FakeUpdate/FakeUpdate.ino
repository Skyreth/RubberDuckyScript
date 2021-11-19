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
  Keyboard.releaseAll();
}

void runscript() {
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(500);
  Keyboard.releaseAll();
  
  Keyboard.print("msedge https://fakeupdate.net/win10ue/");
  processKey(KEY_RETURN);

  processKey(KEY_F11);
  
}

void loop() {

}
