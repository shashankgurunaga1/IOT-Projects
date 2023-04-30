int a= 11;
int b=12;
int c= 2;
int d =3;
int e = 6;
int f = 9;
int g = 10;
void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  
}
void two()
{
 digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
   digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
   digitalWrite(g,HIGH);
  delay(1000);
}
void three(){
   digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay(1000);
}
void seven(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(1000);
}
void loop(){
two();
three();
seven();
}
