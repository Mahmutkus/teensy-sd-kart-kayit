#include <SD.h>
#include <SPI.h>

const int chipSelect = BUILTIN_SDCARD;   //teensy üzerindeki sd kart portunu kullanıyoruz

void setup()
{             
  !SD.begin(chipSelect);
}

void loop()
{
  File dataFile = SD.open("datalog.txt", FILE_WRITE);   //datalog adında bir dosya açıyoruz

  dataFile.println("11");                               //açtığımız dosyanın içerisine örnek olarak 11 sayısını yazıyoruz
  dataFile.close();                                     //açtığımız dosyayı kapatıyoruz

  delay(100);                                           //100 ms bekliyoruz
}
