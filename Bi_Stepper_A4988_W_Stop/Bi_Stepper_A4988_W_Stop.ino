 // Stepper with A4988 : while to hold
 int STEP = 8; 
 int DIR = 7;   // Direction
 boolean Button = true ;
 
 void setup() {
  pinMode(STEP,OUTPUT); 
  pinMode(DIR,OUTPUT);
  digitalWrite(DIR,HIGH); // + Direction 
  pinMode(2, INPUT) ; // Button pin input   
 }
 
 void loop() {

  int Button = digitalRead(2) ;
  
  if ( Button == 1 ) {
   for(int x = 0; x < 200; x++) {  
     digitalWrite(STEP,HIGH); 
     delayMicroseconds(700); 
     digitalWrite(STEP,LOW); 
     delayMicroseconds(700); 
   }
   Button = !Button ;
  }
   else {
    digitalWrite(STEP,LOW); 
    digitalWrite(STEP,LOW);
   }
 }
