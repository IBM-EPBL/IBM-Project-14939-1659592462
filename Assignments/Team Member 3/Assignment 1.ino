float temp,tempC,tempMV ;
void setup ( )
{
  pinMode (A0, INPUT ) ;
  pinMode (11, OUTPUT ) ;
  pinMode (13, OUTPUT ) ;
  Serial.begin ( 9600 ) ;
  
}
void loop ()
{
  temp = analogRead(A0);
  tempMV = temp*5000 / 1024;
  tempC = (tempMV/10)+(-50) ;
  Serial.println (tempC) ;
if ( tempC >25)
{
   tone (11 , 5000 , 100);
   digitalWrite (13,HIGH);
 }
  else
    digitalWrite (13,LOW);
}
