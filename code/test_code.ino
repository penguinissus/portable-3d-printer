// Number of motors
const int motorCount = 4;

// Step and direction pins for each motor
const int stepPin[motorCount] = {2, 4, 6, 8};
const int dirPin[motorCount]  = {3, 5, 7, 9};

void setup() {
  // Set all step and dir pins as outputs
  for (int i = 0; i < motorCount; i++) {
    pinMode(stepPin[i], OUTPUT);
    pinMode(dirPin[i], OUTPUT);
  }
}

void loop() {
  // Set direction HIGH for all motors
  for (int i = 0; i < motorCount; i++) {
    digitalWrite(dirPin[i], HIGH);
  }

  // 200 steps (1 rotation)
  for (int x = 0; x < 200; x++) {
    for (int i = 0; i < motorCount; i++) {
      digitalWrite(stepPin[i], HIGH);
    }
    delayMicroseconds(2000);

    for (int i = 0; i < motorCount; i++) {
      digitalWrite(stepPin[i], LOW);
    }
    delayMicroseconds(2000);
  }

  delay(1000);

  // Change direction for all motors
  for (int i = 0; i < motorCount; i++) {
    digitalWrite(dirPin[i], LOW);
  }

  // 400 steps (2 rotations)
  for (int x = 0; x < 400; x++) {
    for (int i = 0; i < motorCount; i++) {
      digitalWrite(stepPin[i], HIGH);
    }
  delayMicroseconds(2000);

    for (int i = 0; i < motorCount; i++) {
      digitalWrite(stepPin[i], LOW);
    }
  delayMicroseconds(2000);
  }
  
  delay(1000);
}
