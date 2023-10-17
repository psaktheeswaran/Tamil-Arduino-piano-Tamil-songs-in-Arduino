// Define the note frequencies
int D5 = 587;
int Csharp5 = 554;
int B4 = 494;
int Asharp4 = 466;
int E5 = 659;
int Dsharp5 = 622;
int G5 = 784;
int Fsharp5 = 740;
int F4 = 349;
int MyA4 = 440; // Custom variable with prefix to avoid conflicts
int MyD4 = 293; // Custom variable with prefix to avoid conflicts
int MyE4 = 330; // Custom variable with prefix to avoid conflicts
int MyGsharp5 = 415; // Custom variable with prefix to avoid conflicts
int MyGsharp6 = 830; // Custom variable with prefix to avoid conflicts
int MyA5 = 880; // Custom variable with prefix to avoid conflicts
int MyAsharp5 = 466; // Custom variable with prefix to avoid conflicts
int MyB5 = 988; // Custom variable with prefix to avoid conflicts

// Define state variables
int melodyState = 0;
int noteDuration = 100;
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
      playNote(D5, noteDuration);
      playNote(D5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(B4, noteDuration);
      playNote(B4, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(B4, noteDuration);
      melodyState = 1;
      break;

    case 1:
      // Second segment of the melody
      playNote(D5, noteDuration);
      playNote(D5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(B4, noteDuration);
      playNote(B4, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(B4, noteDuration);
      melodyState = 2;
      break;

    case 2:
      // Third segment of the melody
      playNote(E5, noteDuration);
      playNote(E5, noteDuration);
      playNote(Dsharp5, noteDuration);
      playNote(Dsharp5, noteDuration);
      playNote(E5, noteDuration);
      playNote(Dsharp5, noteDuration);
      playNote(E5, noteDuration);
      melodyState = 3;
      break;

    case 3:
      // Fourth segment of the melody
      playNote(Dsharp5, noteDuration);
      playNote(E5, noteDuration);
      playNote(G5, noteDuration);
      playNote(Fsharp5, noteDuration);
      playNote(Fsharp5, noteDuration);
      playNote(E5, noteDuration);
      playNote(D5, noteDuration);
      playNote(Csharp5, noteDuration);
      melodyState = 4;
      break;

    case 4:
      // Fifth segment of the melody
      playNote(Dsharp5, noteDuration);
      playNote(E5, noteDuration);
      playNote(G5, noteDuration);
      playNote(Fsharp5, noteDuration);
      playNote(Fsharp5, noteDuration);
      playNote(E5, noteDuration);
      playNote(D5, noteDuration);
      playNote(Csharp5, noteDuration);
      melodyState = 5;
      break;

    case 5:
      // Sixth segment of the melody
      playNote(Csharp5, noteDuration);
      playNote(E5, noteDuration);
      playNote(Fsharp5, noteDuration);
      playNote(G5, noteDuration);
      playNote(Fsharp5, noteDuration);
      playNote(E5, noteDuration);
      playNote(D5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(B4, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(B4, noteDuration);
      melodyState = 6;
      break;

    case 6:
      // Seventh segment of the melody
      playNote(D5, noteDuration);
      playNote(D5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(B4, noteDuration);
      playNote(B4, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(B4, noteDuration);
      playNote(Csharp5, noteDuration);
      melodyState = 7;
      break;

    case 7:
      // Eighth segment of the melody
      playNote(D5, noteDuration);
      playNote(D5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(B4, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(B4, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(B4, noteDuration);
      playNote(F4, noteDuration);
      playNote(MyA4, noteDuration);
      playNote(F4, noteDuration);
      melodyState = 8;
      break;

    case 8:
      // Ninth segment of the melody
      playNote(D5, noteDuration);
      playNote(D5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(B4, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(B4, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(B4, noteDuration);
      playNote(B4, noteDuration);
      playNote(Csharp5, noteDuration);
      melodyState = 9;
      break;

    case 9:
      // Tenth segment of the melody
      playNote(D5, noteDuration);
      playNote(D5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(B4, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(B4, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(B4, noteDuration);
      playNote(MyD4, noteDuration);
      playNote(MyE4, noteDuration);
      playNote(MyD4, noteDuration);
      melodyState = 10;
      break;

    case 10:
      // Eleventh segment of the melody
      playNote(D5, noteDuration);
      playNote(D5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(B4, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(B4, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(B4, noteDuration);
      playNote(Csharp5, noteDuration);
      melodyState = 11;
      break;

    case 11:
      // Twelfth segment of the melody
      playNote(D5, noteDuration);
      playNote(D5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(B4, noteDuration);
      playNote(Csharp5, noteDuration);
      playNote(B4, noteDuration);
      playNote(Asharp4, noteDuration);
      playNote(B4, noteDuration);
      playNote(MyD4, noteDuration);
      playNote(MyE4, noteDuration);
      playNote(MyD4, noteDuration);
      melodyState = 0;
      break;

    // You can continue adding more segments as needed
  }
}
