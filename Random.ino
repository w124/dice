byte sevenDot[10][7] = {                           

                                                           
                                                           { 0,1,1,0,0,0,0 },  // = 1
                                                           { 1,1,0,1,1,0,1 },  // = 2
                                                           { 1,1,1,1,0,0,1 },  // = 3
                                                           { 0,1,1,0,0,0,1 },
                                                           { 1,0,1,1,0,1,1 },
                                                           { 1,0,1,1,1,1,1 }
                                                           
                                                          
 };
void setup() {    

  pinMode(2, OUTPUT);   
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

  
}


void loop() {

for(int i=0;i<3;i++)
{
showNumber(i); 
delay(1000);
}

}
void showNumber(int number){
    int pin = 2;
    for (int j=0; j < 7; j++)
    {
   digitalWrite(pin, sevenDot[number][j]);
   delay(10);
   pin++;
  }
}

