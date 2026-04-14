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
  int adcValue = analogRead(A0);
  float tempA0 = (adcValue * 500.0) / 1023.0;

  Serial.print("{");
  Serial.print("\"tempA0\": ");
  Serial.print(tempA0);
  Serial.println("}");

  delay(1000);
}