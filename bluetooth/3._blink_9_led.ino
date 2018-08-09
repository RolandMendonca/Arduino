  void setup() {
Serial.begin(9600);                        //blutooth
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);                         //pins                                     //Temp                              
  }
void loop() {
  if(Serial.available()>0)
  {
  int  i,j=0,a=13,b=12,c=11;
    char data=Serial.read();
    switch(data)
    {
    case 'a':while(j<20)
             {
              for(i=13;i>4;i--)
              {
              digitalWrite(i,HIGH);
              delay(100);
              digitalWrite(i,LOW);
              }
              j++;
             }
    case 'b':while (j<20)
            {
             if(a==4)
             {
              a=13;
             }
              if(b==4)
             {
              b=13;
             }
              if(c==4)
             {
              a=13;
             }
              digitalWrite(a,HIGH);
               digitalWrite(b,HIGH);
                digitalWrite(c,HIGH);
                delay(100);
             a++;
             b++;
             c++;
            }
    break;
    default: break;
   Serial.println(data);
}
   Serial.println(data);
delay (50);
}
}
