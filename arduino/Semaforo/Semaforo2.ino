int rosso = 12;
int giallo = 11;
int verde = 10;



void setup() {
  // put your setup code here, to run once:
pinMode(rosso,OUTPUT);
pinMode(giallo,OUTPUT);
pinMode(verde,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
semaforo();

}

void semaforo(){
// Verde spento, giallo acceso per 1 sec
digitalWrite(rosso,LOW);
digitalWrite(verde,LOW);
digitalWrite(giallo,HIGH);
delay(1000);

// giallo si spegne, rosso si accende per 2 secondi
digitalWrite(giallo,LOW);
digitalWrite(rosso,HIGH);
delay(2000);

// rosso e giallo accesi per 1 secondi 
digitalWrite(giallo,HIGH);
delay(1000);

// rosso e giallo si spengono, verde si accende per 2 sec
digitalWrite(giallo,LOW);
digitalWrite(rosso,LOW);
digitalWrite(verde,HIGH);
delay(2000);
}
