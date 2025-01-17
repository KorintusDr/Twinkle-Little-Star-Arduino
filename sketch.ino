int buzzer1 = 3;  // Buzzer pertama
int buzzer2 = 4;  // Buzzer kedua
int buzzer3 = 5;  // Buzzer ketiga
int buzzer4 = 6;  // Buzzer keempat

int led1 = 7;  // LED pertama
int led2 = 8;  // LED kedua
int led3 = 9;  // LED ketiga
int led4 = 10; // LED keempat

void setup() {
  pinMode(buzzer1, OUTPUT);
  pinMode(buzzer2, OUTPUT);
  pinMode(buzzer3, OUTPUT);
  pinMode(buzzer4, OUTPUT);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

// Frekuensi nada (dalam Hertz)
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523

void playTone(int pin, int note, int duration, int ledPin) {
  tone(pin, note, duration);
  digitalWrite(ledPin, HIGH);   // Menyalakan LED sesuai nada
  delay(duration * 1.2);        // Menambahkan jeda antar nada
  digitalWrite(ledPin, LOW);    // Mematikan LED setelah nada selesai
  noTone(pin);                  // Matikan buzzer
}

void loop() {
  // "Twinkle Twinkle Little Star" - Melodi untuk 4 buzzer dan LED

  // Baris pertama
  playTone(buzzer1, NOTE_C4, 200, led1);  // "Twin" LED pertama
  playTone(buzzer2, NOTE_C4, 200, led2);  // "kle" LED kedua
  playTone(buzzer3, NOTE_G4, 200, led3);  // "Twin" LED ketiga
  playTone(buzzer4, NOTE_G4, 200, led4);  // "kle" LED keempat

  playTone(buzzer1, NOTE_A4, 200, led1);  // "lit" LED pertama
  playTone(buzzer2, NOTE_A4, 200, led2);  // "tle" LED kedua
  playTone(buzzer3, NOTE_G4, 200, led3);  // "star" LED ketiga
  
  // Baris kedua
  playTone(buzzer1, NOTE_F4, 200, led1);  // "How" LED pertama
  playTone(buzzer2, NOTE_F4, 200, led2);  // "I" LED kedua
  playTone(buzzer3, NOTE_E4, 200, led3);  // "won" LED ketiga
  playTone(buzzer4, NOTE_E4, 200, led4);  // "der" LED keempat
  
  // Baris ketiga
  playTone(buzzer1, NOTE_D4, 200, led1);  // "What" LED pertama
  playTone(buzzer2, NOTE_D4, 200, led2);  // "you" LED kedua
  playTone(buzzer3, NOTE_C4, 200, led3);  // "are" LED ketiga
  
  // Baris keempat (ulang baris pertama)
  playTone(buzzer1, NOTE_C4, 200, led1);  // "Twin" LED pertama
  playTone(buzzer2, NOTE_C4, 200, led2);  // "kle" LED kedua
  playTone(buzzer3, NOTE_G4, 200, led3);  // "Twin" LED ketiga
  playTone(buzzer4, NOTE_G4, 200, led4);  // "kle" LED keempat

  playTone(buzzer1, NOTE_A4, 200, led1);  // "lit" LED pertama
  playTone(buzzer2, NOTE_A4, 200, led2);  // "tle" LED kedua
  playTone(buzzer3, NOTE_G4, 200, led3);  // "star" LED ketiga

  delay(500); // Jeda sebelum mengulang lagi
}
