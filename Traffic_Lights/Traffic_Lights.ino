  
  int red = 11;  // led connected to pin 11
  int yellow = 10;  // led connected to pin 10 
  int green = 9;    // led connected to pin 9



void setup() {
  
  ///setting up all the leds 

  pinMode(red , OUTPUT);       //red
  pinMode(yellow , OUTPUT);    //yellow
  pinMode(green , OUTPUT);     //green
  

}

void loop() {
  
  digitalWrite(red, HIGH);    //turn red on 
  delay(1000);                //time delay of : 1 second
  digitalWrite(red, LOW);     //turn red led off
  
  digitalWrite(yellow, HIGH);    //vice versa
  delay(1000);
  digitalWrite(yellow, LOW);

  digitalWrite(green, HIGH);      //vice versa
  delay(1000);
  digitalWrite(green, LOW);






}
