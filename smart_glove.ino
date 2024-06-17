int a = 0;  // Thumb 
int b = 0;  // Index 
int c = 0;  // Middle 
int d = 0;  // Ring 
int e = 0;  // Little 

void setup() { 
  pinMode(A0, INPUT); 
  pinMode(A1, INPUT); 
  pinMode(A2, INPUT); 
  pinMode(A3, INPUT); 
  pinMode(A4, INPUT); 
  Serial.begin(9600); 
} 

void loop() { 
  a = analogRead(A0); 
  b = analogRead(A3); 
  c = analogRead(A1); 
  d = analogRead(A2); 
  e = analogRead(A4); 

  if (a < 120 && b > 280 && c > 150 && d < 200 && e > 240) { 
    Serial.println("A"); 
  } 
  if (a > 180 && b < 220 && c > 190 && d > 270 && e < 130) { 
    Serial.println("B"); 
  } 
  if (a < 160 && b > 250 && c < 140 && d > 260 && e < 200) { 
    Serial.println("C"); 
  } 
  if (a > 230 && b < 150 && c > 190 && d > 200 && e > 190) { 
    Serial.println("D"); 
  } 
  if (a < 200 && b > 200 && c < 250 && d < 180 && e > 210) { 
    Serial.println("E"); 
  } 
  if (a > 250 && b > 250 && c > 250 && d > 250 && e > 250) { 
    Serial.println("F"); 
  } 
  if (a < 150 && b > 250 && c > 250 && d > 250 && e < 250) { 
    Serial.println("G"); 
  } 
  if (a > 250 && b < 150 && c < 150 && d > 250 && e > 250) { 
    Serial.println("H"); 
  } 
  if (a < 130 && b > 270 && c < 200 && d > 220 && e < 210) { 
    Serial.println("I"); 
  } 
  if (a > 280 && b < 170 && c < 200 && d < 230 && e > 250) { 
    Serial.println("J"); 
  } 
  if (a > 220 && b < 200 && c > 270 && d < 150 && e > 260) { 
    Serial.println("K"); 
  } 
  if (a < 180 && b > 220 && c > 270 && d > 270 && e < 200) { 
    Serial.println("L"); 
  } 
  if (a < 250 && b > 170 && c > 220 && d > 210 && e > 260) { 
    Serial.println("M"); 
  } 
  if (a > 270 && b < 180 && c > 220 && d < 210 && e < 200) { 
    Serial.println("N"); 
  } 
  if (a < 240 && b > 220 && c < 180 && d > 270 && e > 260) { 
    Serial.println("O"); 
  } 
  if (a > 230 && b < 180 && c > 270 && d > 190 && e < 260) { 
    Serial.println("P"); 
  } 
  if (a > 180 && b < 210 && c > 260 && d < 280 && e < 250) { 
    Serial.println("Q"); 
  } 
  if (a < 220 && b < 200 && c > 280 && d > 230 && e > 250) { 
    Serial.println("R"); 
  } 
  if (a > 240 && b > 220 && c < 200 && d < 210 && e > 250) { 
    Serial.println("S"); 
  } 
  if (a < 230 && b > 250 && d < 220 && e < 200) { 
    Serial.println("T"); 
  } 
  if (a > 200 && b < 250 && d > 200 && e < 250) { 
    Serial.println("U"); 
  } 
  if (a > 260 && b < 200 && d < 250 && e < 250 && c > 270) { 
    Serial.println("V"); 
  } 
  if (a < 280 && b < 250 && d < 270 && e < 250 && c > 280) { 
    Serial.println("W"); 
  } 
  if (a > 270 && b > 290 && d < 250 && e < 260 && c > 280) { 
    Serial.println("X"); 
  } 
  if (a > 260 && b > 290 && d < 250 && e > 280 && c > 270) { 
    Serial.println("Y"); 
  } 
  if (a > 280 && b > 290 && d > 270 && e > 250 && c < 280) { 
    Serial.println("Z"); 
  } 

  delay(500);  
}
