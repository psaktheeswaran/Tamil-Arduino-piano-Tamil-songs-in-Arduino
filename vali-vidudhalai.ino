// Define the note frequencies
int F4 = 349;
int C5 = 523;
int Asharp4 = 466;
int Dsharp4 = 311;
int Gsharp4 = 415;
int C4 = 261;

// Define state variables
int melodyState = 0;
int noteDuration = 90;
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
      melodyState = 2;
      break;

    case 2:
      // Third segment of the melody
      playNote(F4, noteDuration);
      playNote(C5, noteDuration);
      playNote(F4, noteDuration);
      playNote(C5, noteDuration);
      playNote(C5, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(C5, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(F4, noteDuration);
      playNote(C5, noteDuration);
      melodyState = 3;
      break;

    case 3:
      // Fourth segment of the melody
      playNote(Asharp4, noteDuration);
      playNote(C5, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(F4, noteDuration);
      playNote(Gsharp4, noteDuration);
      playNote(Gsharp4, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(Gsharp4, noteDuration);
      playNote(F4, noteDuration);
      playNote(F4, noteDuration);
      playNote(Dsharp4, noteDuration);
      playNote(Dsharp4, noteDuration);
      playNote(F4, noteDuration);
      playNote(Gsharp4, noteDuration);
      playNote(F4, noteDuration);
      playNote(C4, noteDuration);
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
