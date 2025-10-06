int pinoLRD = A0;

int pinoLED = 9;

int limiteLuz = 300;

void setup(){
  pinMode(pinoLED, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  
  int valorLuz = analogRead(pinoLRD);
  
  Serial.print("Valor da luz: ");
  Serial.print(valorLuz);
  
  if (valorLuz < limiteLuz){
    digitalWrite(pinoLED, HIGH);
  } else {
    digitalWrite(pinoLED, LOW);
  }
  
  delay(100);
}