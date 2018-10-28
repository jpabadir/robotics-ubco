int x[100][100]; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 100; i++) {
    for(int j = 0; j < 100; j++) {
      Serial.print(x[i][j]);
    }
    Serial.print("\n");
    delay(1000);
  }
}
