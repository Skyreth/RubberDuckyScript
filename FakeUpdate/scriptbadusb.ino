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

  Keyboard.print("start msedge https://fakeupdate.net/win10ue/");
  Keyboard.press(KEY_INSERT);
  delay(500);

  Keyboard.press(KEY_F10);
}

void loop() {

}
