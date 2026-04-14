/*
 * Du an: Doc nhiet do LM35 va gui qua Serial
 * Mon: Mang Cam Bien - Tuan 03
 */

int adcValue;
float nhietDo;
int adcValues[3];
float nhietDo[3];
char chuoi[30];

void setup()
{
  Serial.begin(9600);
  delay(100);
}

void loop() {
  int adcValue0 = analogRead(A0);
  float tempA0 = (adcValue0 * 500.0) / 1023.0;

  int adcValue1 = analogRead(A1);
  float tempA1 = (adcValue1 * 500.0) / 1023.0;

  int adcValue2 = analogRead(A2);
  float tempA2 = (adcValue2 * 500.0) / 1023.0;

  Serial.print("{");
  Serial.print("\"tempA0\": ");
  Serial.print(tempA0);
  Serial.print(", \"tempA1\": ");
  Serial.print(tempA1);
  Serial.print(", \"tempA2\": ");
  Serial.print(tempA2);
  Serial.println("}");

  delay(1000);
}