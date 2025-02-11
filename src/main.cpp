#include <Arduino.h>

// Deklarasi Pin :LED
// Mendeklarasikan Variabel Konstanta interger untuk menyimpan nomor pin LED
const int ledMerah = 8;
const int ledKuning = 9;
const int ledHijau = 10;

void setup() {

 // Mengatur pin-pin yang dihunbungkan ke LED sebagai output
 // Hal ini berarti pin-pin tersebut dapat digunakan untuk mengendalikan LED.

 pinMode(ledMerah, OUTPUT);
 pinMode(ledKuning, OUTPUT);
 pinMode(ledHijau, OUTPUT);
}

void loop() {

 // LED Merah 
 // Menyalakan LED Merah selama 2 detik, kemudian mematikanya

 digitalWrite(ledMerah, HIGH);
 delay(2000);
 digitalWrite(ledMerah, LOW);

 // Led Kuning
 // Menyalakan LED Kuning selama 2 detik, kemudian mematikanya
 digitalWrite(ledKuning, HIGH);
 delay(2000);
 digitalWrite(ledKuning, LOW);

  // Led Hijau
 // Menyalakan LED Hijau selama 2 detik, kemudian mematikanya
 digitalWrite(ledHijau, HIGH);
 delay(2000);
 digitalWrite(ledHijau, LOW);
}