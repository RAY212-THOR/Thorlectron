#define ledA 2
#define ledB 3
#define ledC 4
#define ledD 5
#define ledE 6
#define ledF 7
#define ledG 8


void setup() {
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledG, OUTPUT);
}

void loop() {
  for(int i=0; i<10; i++){
    displayNumero(i);
    delay(500);
    displayNumero(-1);
  }
}

void displayNumero(int numero){
  switch(numero){
    case 0:
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    digitalWrite(ledE, HIGH);
    digitalWrite(ledF, HIGH);
    break;
    
    case 1:
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    break;

    case 2:
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledD, HIGH);
    digitalWrite(ledE, HIGH);
    digitalWrite(ledG, HIGH);
    break;

    case 3:
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    digitalWrite(ledG, HIGH);
    break;

    case 4:
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledG, HIGH);
    break;

    case 5:
    digitalWrite(ledA, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledG, HIGH);
    break;

    case 6:
    digitalWrite(ledA, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    digitalWrite(ledE, HIGH);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledG, HIGH);
    break;

    case 7:
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    break;

    case 8:
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    digitalWrite(ledE, HIGH);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledG, HIGH);
    break;

    case 9:
    digitalWrite(ledA, HIGH);
    digitalWrite(ledB, HIGH);
    digitalWrite(ledC, HIGH);
    digitalWrite(ledD, HIGH);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledG, HIGH);
    break;

    default:
    digitalWrite(ledA, LOW);
    digitalWrite(ledB, LOW);
    digitalWrite(ledC, LOW);
    digitalWrite(ledD, LOW);
    digitalWrite(ledE, LOW);
    digitalWrite(ledF, LOW);
    digitalWrite(ledG, LOW);
  }
}

