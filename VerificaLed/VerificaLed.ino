int LedRosso = 10;
int LedGiallo = 8;
int LedBianco = 6;
int LedVerde = 4;
int Tempo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LedRosso,OUTPUT);
  pinMode(LedGiallo,OUTPUT);
  pinMode(LedVerde,OUTPUT);
  pinMode(LedBianco,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LedRosso,HIGH);
  digitalWrite(LedGiallo,HIGH);
  digitalWrite(LedBianco,LOW);
  digitalWrite(LedVerde,LOW);
  delay(Tempo);
  digitalWrite(LedRosso,LOW);
  digitalWrite(LedGiallo,LOW);
  digitalWrite(LedBianco,HIGH);
  digitalWrite(LedVerde,HIGH);
  delay(Tempo);
  
 

}
void RichiediTempo(){
 Serial.println ( "quantio tempo in millesecondi devono rimanere accesi?");
  while ( Serial.available() == 0)   {};
  Tempo  = Serial.readString().toInt();
}

