const int dcMotors[] = {};
const int forward[] = {HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW};
const int backward[] = {LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH};
const int STOP[] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW}; 

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < sizeof(dcMotors)/sizeof(dcMotors)[0]; i++)
  {
    pinMode(dcMotors[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < sizeof(dcMotors) / sizeof(dcMotors)[0]; i++)
  {
    digitalWrite(dcMotors[i], forward[i]);
    delay(1000);
  }

  for (int i = 0; i < sizeof(dcMotors) / sizeof(dcMotors)[0]; i++)
  {
    digitalWrite(dcMotors[i], stop[i]);
    delay(1000);
  }
   
  for (int i = 0; i < sizeof(dcMotors) / sizeof(dcMotors)[0]; i++)
  {
    digitalWrite(dcMotors[i], backward[i]);
    delay(1000);
  }

    for (int i = 0; i < sizeof(dcMotors) / sizeof(dcMotors)[0]; i++)
  {
    digitalWrite(dcMotors[i], stop[i]);
    delay(1000);
  }
} 

