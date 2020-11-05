void setup()
{
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
}

void binary (int values[], int number) {
  for(int i = 0; i < 4; i++) {
    values[i] = number % 2 ;
    number = number/2 ;
   }
}

void loop()
{
  int number = 0 ;
  int values[4];
 
  while(number <=15) {
  binary(values, number) ;
    digitalWrite(13, values[3]) ;
    digitalWrite(11, values[2]) ;
    digitalWrite(9, values[1]) ;
    digitalWrite(7, values[0]) ;
    delay(2000);
    number++ ;
  }
 
}
