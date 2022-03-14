int pulsadores[5] = {2, 3, 4, 5};
int i;
void setup() {
  for (i = 0; i < 4; i++)
  {
    pinMode(pulsadores[i], INPUT_PULLUP);
  }
  Serial.begin(9600);
}
int valores[4] = {1, 1, 1, 1};
void loop() {
  valores[0] = digitalRead(pulsadores[0]);
  valores[1] = digitalRead(pulsadores[1]);
  valores[2] = digitalRead(pulsadores[2]);
  valores[3] = digitalRead(pulsadores[3]);
  int indexPresionado = -1;
  for (i = 0; i < 4; i++)
  {
    if (valores[i] == 0)
      indexPresionado = i;
  }
  switch (indexPresionado)
  {
    case 0: Serial.println("0");
      break;
    case 1: Serial.println("1");
      break;
    case 2: Serial.println("2");
      break;
    case 3: Serial.println("3");
      break;
  }
  delay(400);
  for(i=0; i<5; i++)
  {
    valores[i]=1;
  }
}
