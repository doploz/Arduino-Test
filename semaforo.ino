int verde = 7;
int amarillo = 8;
int rojo = 9;

void setup(){
  pinMode(verde, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop(){
  digitalWrite (verde, HIGH);
  delay (3000);
  digitalWrite (verde, LOW);
  delay (500);
  
  digitalWrite (amarillo, HIGH);
  delay (3000);
  digitalWrite (amarillo, LOW);
  delay (500);
  
  digitalWrite (rojo, HIGH);
  delay (3000);
  digitalWrite (rojo, LOW);
  delay (500);

 }
