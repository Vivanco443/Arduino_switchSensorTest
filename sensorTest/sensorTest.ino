volatile int NumPulsos = 0;
int contador = 0;
void setup() {
  attachInterrupt(digitalPinToInterrupt(2), ContarPulsos, RISING); // 0 refiere al pin 2
  //attachInterrupt(digitalPinToInterrupt(3), Mostrar, FALLING);   //  1 refiere al pin 3
  Serial.begin(9600);
  
}

void loop() {
  if (Serial.available() > 0 && contador!=NumPulsos){
      Serial.print("El numero de pulsos es: ");
      Serial.println(NumPulsos);
      contador = NumPulsos;
  }
}

void ContarPulsos(){
  NumPulsos++;
}
