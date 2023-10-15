// Define the note frequencies
int Fsharp5 = 740;
int B5 = 988;
int Csharp6 = 1108;
int Fsharp6 = 1480;
int E6 = 1318;
int D6 = 1174;
int Asharp5 = 932;
int E6_2 = 1318;
int D6_2 = 1174;
int B5_2 = 988;
int Csharp6_2 = 1108;
int E6_3 = 1318;
int D6_3 = 1174;
int Fsharp6_2 = 1480;
int Csharp6_3 = 1108;
int D6_4 = 1174;
int Csharp6_4 = 1108;

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
      playNote(Fsharp5, noteDuration);
      playNote(B5, noteDuration);
      playNote(Csharp6, noteDuration);
      playNote(Fsharp6, noteDuration);
      playNote(E6, noteDuration);
      playNote(D6, noteDuration);
      playNote(B5_2, noteDuration);
      playNote(Csharp6_2, noteDuration);
      playNote(Asharp5, noteDuration);
      playNote(Fsharp5, noteDuration);
      playNote(B5, noteDuration);
      playNote(Csharp6, noteDuration);
      playNote(Fsharp6, noteDuration);
      playNote(E6, noteDuration);
      playNote(D6, noteDuration);
      playNote(B5_2, noteDuration);
      playNote(Csharp6_2, noteDuration);
      playNote(Asharp5, noteDuration);
      playNote(B5_2, noteDuration);
      playNote(D6_2, noteDuration);
      playNote(D6_2, noteDuration);
      playNote(Csharp6_2, noteDuration);
      melodyState = 1;
      break;

    case 1:
      // Second segment of the melody
      playNote(Fsharp5, noteDuration);
      playNote(Fsharp5, noteDuration);
      playNote(B5, noteDuration);
      playNote(Csharp6, noteDuration);
      playNote(Fsharp6, noteDuration);
      playNote(E6, noteDuration);
      playNote(D6, noteDuration);
      playNote(B5_2, noteDuration);
      playNote(Csharp6_2, noteDuration);
      playNote(Asharp5, noteDuration);
      playNote(Fsharp5, noteDuration);
      playNote(Fsharp5, noteDuration);
      playNote(B5, noteDuration);
      playNote(Csharp6, noteDuration);
      playNote(Fsharp6, noteDuration);
      playNote(E6, noteDuration);
      playNote(D6, noteDuration);
      playNote(B5_2, noteDuration);
      playNote(Csharp6_2, noteDuration);
      playNote(Asharp5, noteDuration);
      playNote(B5_2, noteDuration);
      playNote(D6_2, noteDuration);
      playNote(D6_2, noteDuration);
      playNote(Csharp6_2, noteDuration);
      melodyState = 2;
      break;

    case 2:
      // Third segment of the melody
      playNote(E6_3, noteDuration);
      playNote(E6_3, noteDuration);
      playNote(E6_3, noteDuration);
      playNote(D6_3, noteDuration);
      playNote(Csharp6_3, noteDuration);
      playNote(Csharp6_3, noteDuration);
      playNote(D6_3, noteDuration);
      playNote(Csharp6_3, noteDuration);
      playNote(D6_3, noteDuration);
      playNote(B5_2, noteDuration);
      melodyState = 3;
      break;

    case 3:
      // Fourth segment of the melody
      playNote(Csharp6_3, noteDuration);
      playNote(D6_4, noteDuration);
      playNote(E6_3, noteDuration);
      playNote(E6_3, noteDuration);
      playNote(Fsharp6_2, noteDuration);
      playNote(E6_3, noteDuration);
      playNote(D6_4, noteDuration);
      playNote(B5_2, noteDuration);
      playNote(Csharp6_4, noteDuration);
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
