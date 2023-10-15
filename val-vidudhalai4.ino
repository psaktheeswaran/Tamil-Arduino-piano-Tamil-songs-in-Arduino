// Define the note frequencies
int F4 = 349;
int C5 = 523;
int Asharp4 = 466;
int Dsharp4 = 311;
int Gsharp4 = 415;
int C4 = 261;
int Gsharp4_2 = 415;
int Dsharp4_2 = 311;
int F4_2 = 349;
int C4_2 = 261;
int F4_3 = 349;
int Gsharp4_3 = 415;
int F4_4 = 349;
int Gsharp4_4 = 415;
int C5_2 = 523;
int Asharp4_2 = 466;
int Dsharp4_3 = 311;
int F4_5 = 349;
int C5_3 = 523;
int Asharp4_3 = 466;
int Gsharp4_5 = 415;
int C4_3 = 261;
int Dsharp4_4 = 311;
int F4_6 = 349;
int Gsharp4_6 = 415;
int F4_7 = 349;
int C4_4 = 261;
int Dsharp4_5 = 311;
int C4_5 = 261;
int Dsharp4_6 = 311;
int Dsharp4_7 = 311;
int F4_8 = 349;
int Gsharp4_7 = 415;
int C5_4 = 523;
int Asharp4_4 = 466;
int Dsharp4_8 = 311;
int F4_9 = 349;
int C5_5 = 523;
int Asharp4_5 = 466;
int Gsharp4_8 = 415;
int Gsharp4_9 = 415;
int Dsharp4_9 = 311;
int F4_10 = 349;
int Gsharp4_10 = 415;
int C5_6 = 523;
int Asharp4_6 = 466;
int Dsharp4_10 = 311;
int F4_11 = 349;
int C5_7 = 523;
int Asharp4_7 = 466;
int Gsharp4_11 = 415;
int Gsharp4_12 = 415;
int C4_6 = 261;
int Dsharp4_11 = 311;
int F4_12 = 349;
int Gsharp4_13 = 415;
int C5_8 = 523;
int Asharp4_8 = 466;
int Dsharp4_12 = 311;
int F4_13 = 349;

// Define state variables
int melodyState = 0;
int noteDuration = 50;
int pauseDuration = 100;

void setup() {
  pinMode(7, OUTPUT);
}

void playNote(int note, int duration) {
  tone(7, note, duration);
  delay(duration + pauseDuration);
}

void loop() {
  switch (melodyState) {
    case 0:
      // First segment of the melody
      playNote(F4, noteDuration);
      playNote(C5, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(C5, noteDuration);
      playNote(F4, noteDuration);
      playNote(C4, noteDuration);
      playNote(F4, noteDuration);
      playNote(C5, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(C5, noteDuration);
      playNote(F4, noteDuration);
      playNote(Dsharp4, noteDuration);
      playNote(Dsharp4, noteDuration);
      playNote(F4, noteDuration);
      playNote(Gsharp4, noteDuration);
      playNote(F4, noteDuration);
      playNote(C4, noteDuration);
      melodyState = 1;
      break;

    case 1:
      // Second segment of the melody
      playNote(F4_2, noteDuration);
      playNote(Gsharp4_2, noteDuration);
      playNote(F4_3, noteDuration);
      playNote(Gsharp4_3, noteDuration);
      playNote(Gsharp4_4, noteDuration);
      playNote(C4_2, noteDuration);
      playNote(Dsharp4_2, noteDuration);
      playNote(C4_3, noteDuration);
      playNote(Dsharp4_3, noteDuration);
      playNote(Dsharp4_4, noteDuration);
      playNote(Dsharp4_5, noteDuration);
      playNote(F4_4, noteDuration);
      playNote(Gsharp4_5, noteDuration);
      playNote(F4_5, noteDuration);
      playNote(C4_4, noteDuration);
      melodyState = 2;
      break;

    case 2:
      // Third segment of the melody
      playNote(F4_6, noteDuration);
      playNote(Gsharp4_6, noteDuration);
      playNote(F4_7, noteDuration);
      playNote(C4_4, noteDuration);
      playNote(Dsharp4_5, noteDuration);
      playNote(C4_5, noteDuration);
      playNote(F4_8, noteDuration);
      playNote(Gsharp4_7, noteDuration);
      playNote(C5_4, noteDuration);
      playNote(Asharp4_4, noteDuration);
      playNote(Dsharp4_8, noteDuration);
      playNote(F4_9, noteDuration);
      playNote(C5_5, noteDuration);
      playNote(Asharp4_5, noteDuration);
      playNote(Gsharp4_8, noteDuration);
      melodyState = 3;
      break;

    case 3:
      // Fourth segment of the melody
      playNote(Gsharp4_9, noteDuration);
      playNote(Dsharp4_9, noteDuration);
      playNote(F4_10, noteDuration);
      playNote(Gsharp4_10, noteDuration);
      playNote(C5_6, noteDuration);
      playNote(Asharp4_6, noteDuration);
      playNote(Dsharp4_10, noteDuration);
      playNote(F4_11, noteDuration);
      playNote(C5_7, noteDuration);
      playNote(Asharp4_7, noteDuration);
      playNote(Gsharp4_11, noteDuration);
      playNote(Gsharp4_12, noteDuration);
      playNote(C4_6, noteDuration);
      melodyState = 4;
      break;

    case 4:
      // Fifth segment of the melody
      // You can continue adding more segments as needed

      // When you reach the end of the melody, you can reset the state to 0 to play it again
      melodyState = 0;
      break;
  }
}
