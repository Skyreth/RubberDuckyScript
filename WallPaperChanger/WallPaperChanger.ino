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

void runscript()
{
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  delay(500);
  Keyboard.releaseAll();

  Keyboard.print("powershell");
  processKey(KEY_RETURN);

  Keyboard.print("$client = new-object System.Net.WebClient");
  processKey(KEY_RETURN);

  Keyboard.print("$client.DownloadFile('https://www.parcanimalierdauvergne.fr/wp-content/uploads/2019/04/Loups-blancs-neige-1.jpg','C:/Temp/background.jpg')");
  processKey(KEY_RETURN);

  Keyboard.print("OUI");
  processKey(KEY_RETURN);

  Keyboard.print("reg add \"HKEY_CURRENT_USER\\Control Panel\\Desktop\\\" /v Wallpaper /t REG_SZ /d");
  processKey(KEY_RETURN);

  Keyboard.print("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters");
  processKey(KEY_RETURN);
}

void loop() {

}
