# 4-Bit Binary Counter with Arduino

Ushbu loyiha Arduino yordamida 0 dan 15 gacha bo'lgan sonlarni 2-lik (binary) sanoq sistemasida svetodiodlar (LED) orqali ko'rsatib beradi.

## 🚀 Loyiha haqida
Loyiha C++ tilida yozilgan bo'lib, unda `String` massivlari va tsikllar bilan ishlash mantiqi qo'llanilgan. Har bir LED bit vazifasini bajaradi:
* `0000` (0) - Barcha LEDlar o'chiq
* `1111` (15) - Barcha LEDlar yoniq

## 🛠 Kerakli komponentlar
* **Arduino Uno** (yoki istalgan boshqa model)
* **4 ta LED** (Svetodiod)
* **4 ta 220 Ohm rezistor**
* **Breadboard** va ulovchi simlar

## 🔌 Ulanish sxemasi
LEDlar quyidagi pinlarga ulangan:
| LED (Bit) | Arduino Pin |
| :--- | :--- |
| Bit 0 (LSB) | Pin 2 |
| Bit 1 | Pin 3 |
| Bit 2 | Pin 4 |
| Bit 3 (MSB) | Pin 5 |



## 💻 Kod
Kodni `src/main.cpp` yoki `binary_counter.ino` faylidan topishingiz mumkin. Asosiy mantiq `for` tsikli va bitlarni tekshirishga asoslangan.

## 🛠 O'rnatish va ishga tushirish
1. Ushbu repozitoriyani yuklab oling (`clone`).
2. Arduino IDE dasturini oching.
3. Kodni plataga yuklang (`Upload`).
4. Natijani kuzating!
