int BT;
int m1=9;
int m2=10;
int m3=4;
int m4=5;
 
void setup() {
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT); 
 // put your setup code here, to run once:

}

void loop() {
if(Serial.available()>0)
{
BT=Serial.read();
if (BT='A')
{
digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,LOW);

}
else if(BT='B')
{
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,HIGH);
}
else
{
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
}
}
}
  

  // put your main code here, to run repeatedly:
