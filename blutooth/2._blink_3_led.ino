  void setup() {
 Serial.begin(9600);                        //blutooth
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);                         //pins
int i;                                      //Temp

  }
void loop() {
  if(Serial.available()>0)
  {
  int  i=0;
    char data=Serial.read();
    switch(data)
    {
    case 'a':while(i<10)
             {
              digitalWrite(9,HIGH);
              delay (500);
              digitalWrite(9,LOW);
              delay (500);
              digitalWrite(10,HIGH);
              delay (500);
              digitalWrite(10,LOW);
              delay (500);
              digitalWrite(11,HIGH);
              delay (500);
              digitalWrite(11,LOW);
              delay (500);
              i++;
             }
             digitalWrite(9,LOW);
             digitalWrite(10,LOW);
             digitalWrite(11,LOW);
    break;
    case 'b':while(i<10)
             {
             digitalWrite(9,HIGH);
             digitalWrite(10,HIGH);
             digitalWrite(11,HIGH);
             delay(500);
             digitalWrite(9,LOW);
             digitalWrite(10,LOW);
             digitalWrite(11,LOW);
             delay(500);
             i++;
             }
             digitalWrite(9,LOW);
             digitalWrite(10,LOW);
             digitalWrite(11,LOW);
    break;
    case 'c':
             digitalWrite(9,HIGH);
             digitalWrite(10,HIGH);
             digitalWrite(11,HIGH);
    break;
    case 'd':digitalWrite(9,LOW);
             digitalWrite(10,LOW);
             digitalWrite(11,LOW);
    break;
    default: break;
    }
   Serial.println(data);
}
delay (50);
}
