int sensorPin=9;
int valor:
int valor_analogico;

void setup(){
	pinMode(sensorPin , INPUT);
  	pinMode(A0 , INPUT);
  	Serial.begin(9600);
}

void loop(){
	valor = digitalRead(sensorPin);
  	
  	valor_analogico = analogRead(A1);
  	Serial.print(valor_analogico);
  	Serial.print(" ");
  	Serial.println(valor);
}