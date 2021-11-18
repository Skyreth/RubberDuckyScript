#include "Keyboard.h"

void setup()
{
  Keyboard.begin();
  delay(1000);
  runscript();
  Keyboard.end();
}

void runscript()
{
  Keyboard.press(KEY_LEFT_GUI);
  delay(500);
  Keyboard.press('r');
  Keyboard.releaseAll();

  Keyboard.print("powershell");
  Keyboard.press(KEY_INSERT);
  delay(500);

  Keyboard.print("$client = new-object System.Net.WebClient");
  Keyboard.press(KEY_INSERT);
  delay(500);

  Keyboard.print("$client.DownloadFile('https://www.parcanimalierdauvergne.fr/wp-content/uploads/2019/04/Loups-blancs-neige-1.jpg','C:/Temp/background.jpg')");
  Keyboard.press(KEY_INSERT);
  delay(500);

  Keyboard.print("OUI");
  Keyboard.press(KEY_INSERT);
  delay(500);

  Keyboard.print("reg add \"HKEY_CURRENT_USER\\Control Panel\\Desktop\\\" /v Wallpaper /t REG_SZ /d");
  Keyboard.press(KEY_INSERT);
  delay(500);

  Keyboard.print("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters");
  Keyboard.press(KEY_INSERT);
  Keyboard.end();
}

void loop() {

}
