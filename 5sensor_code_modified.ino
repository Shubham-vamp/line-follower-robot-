
//defining sensors
int irLMS=2;
int irLS=3;
int irMS=4;
int irRS=11;
int irRMS=12;

//motor 

int LMPin1 = 7;
int LMPin2 = 8;
int RMPin3 = 9;
int RMPin4 = 10;



int ENA = 5;
int ENB = 6;




void setup(){
  pinMode (irLMS,INPUT);
  pinMode (irLS,INPUT);
  pinMode (irMS,INPUT) ;
  pinMode (irRS,INPUT) ;
  pinMode (irRMS,INPUT) ;
  

  pinMode (LMPin1,OUTPUT);
  pinMode (LMPin2,OUTPUT);
  pinMode (RMPin3,OUTPUT);
  pinMode (RMPin4,OUTPUT);
  
  pinMode (ENA,OUTPUT);
   pinMode (ENB,OUTPUT);
       analogWrite(ENA, 255);
       analogWrite(ENB, 255);
 }
  void loop (){



    if( digitalRead(irLMS) == 0 && digitalRead(irLS) == 0 && digitalRead(irMS) == 1 && digitalRead(irRS) == 0 && digitalRead(irRMS) == 0){
      
      forward();
    
    }
    if( digitalRead(irLMS) == 0 && digitalRead(irLS) == 1 && digitalRead(irMS) == 1 && digitalRead(irRS) == 0 && digitalRead(irRMS) == 0){

      halkaLeft();
      
    
    }
    if(digitalRead(irLMS) == 0 && digitalRead(irLS) == 1 && digitalRead(irMS) == 0 && digitalRead(irRS) == 0 && digitalRead(irRMS) == 0){

      left();
      
  
    }
     if(digitalRead(irLMS) == 1 && digitalRead(irLS) == 1 && digitalRead(irMS) == 0 && digitalRead(irRS) == 0 && digitalRead(irRMS) == 0){

      fastLeft();
      
    
    }
    if(digitalRead(irLMS) == 1 && digitalRead(irLS) == 0 && digitalRead(irMS) == 0 && digitalRead(irRS) == 0 && digitalRead(irRMS) == 0){

      sharpLeft();
      
    
    }
     if(digitalRead(irLMS) == 1 && digitalRead(irLS) == 1 && digitalRead(irMS) == 1 && digitalRead(irRS) == 0 && digitalRead(irRMS) == 0){
       sharpLeft();      
    
    }
    if(digitalRead(irLMS) == 0 && digitalRead(irLS) == 0 && digitalRead(irMS) == 1 && digitalRead(irRS) == 1 && digitalRead(irRMS) == 0){

      halkaRight();
      
    
    }
    if(digitalRead(irLMS) == 0 && digitalRead(irLS) == 0 && digitalRead(irMS) == 0 && digitalRead(irRS) == 1 && digitalRead(irRMS) == 0){

      right();
      
    
    }
    if(digitalRead(irLMS) == 0 && digitalRead(irLS) == 0 && digitalRead(irMS) == 0 && digitalRead(irRS) == 1 && digitalRead(irRMS) == 1){
     
      fastRight();
   
    }
    

if(digitalRead(irLMS) == 0 && digitalRead(irLS) == 0 && digitalRead(irMS) == 0 && digitalRead(irRS) == 0 && digitalRead(irRMS) == 1){

      sharpRight();
      
    
    }
    if(digitalRead(irLMS) == 0 && digitalRead(irLS) == 0 && digitalRead(irMS) == 1 && digitalRead(irRS) == 1 && digitalRead(irRMS) == 1){

      sharpRight();
      
    
    }
    if(digitalRead(irLMS) == 1 && digitalRead(irLS) == 1 && digitalRead(irMS) == 1 && digitalRead(irRS) == 1 && digitalRead(irRMS) == 1){ 


      stops();
      
    
    }
       if(digitalRead(irLMS) == 0 && digitalRead(irLS) == 0 && digitalRead(irMS) == 0 && digitalRead(irRS) == 0 && digitalRead(irRMS) == 0){
        forward();
       }
    
  }
    void forward() {
     
  digitalWrite(LMPin1, LOW);
  digitalWrite(LMPin2, HIGH);
  digitalWrite(RMPin3, LOW);
  digitalWrite(RMPin4, HIGH);

       analogWrite(5, 255);
       analogWrite(6, 255);
 
  }

  void left() {
  digitalWrite(LMPin1, LOW);
  digitalWrite(LMPin2, LOW);
  digitalWrite(RMPin3, LOW);
  digitalWrite(RMPin4, HIGH);
  
       analogWrite(5, 255);
       analogWrite(6, 200);
 
  }
    void halkaLeft() {
  digitalWrite(LMPin1, LOW);
  digitalWrite(LMPin2, LOW);
  digitalWrite(RMPin3, LOW);
  digitalWrite(RMPin4, HIGH);

         analogWrite(5, 255);
       analogWrite(6, 200);
 
  }
  void fastLeft() {
  digitalWrite(LMPin1, LOW);
  digitalWrite(LMPin2, HIGH);
  digitalWrite(RMPin3, HIGH);
  digitalWrite(RMPin4, LOW);
         analogWrite(5, 255);
       analogWrite(6, 200);
  }
  
  void sharpLeft() {
  digitalWrite(LMPin1, HIGH);
  digitalWrite(LMPin2, LOW);
  digitalWrite(RMPin3, LOW);
  digitalWrite(RMPin4, HIGH );
       analogWrite(5, 200);
       analogWrite(6, 255);

  }
  void right() {
  digitalWrite(LMPin1, LOW);
  digitalWrite(LMPin2, HIGH);
  digitalWrite(RMPin3,LOW);
  digitalWrite(RMPin4, LOW);
         analogWrite(5, 255);
       analogWrite(6, 200);
  }
  void halkaRight() {
  digitalWrite(LMPin1, LOW);
  digitalWrite(LMPin2, HIGH);
  digitalWrite(RMPin3, HIGH);
  digitalWrite(RMPin4, LOW);
         analogWrite(5, 255);
       analogWrite(6, 200);
  }
    void fastRight() {
  digitalWrite(LMPin1, LOW);
  digitalWrite(LMPin2, HIGH);
  digitalWrite(RMPin3, HIGH);
  digitalWrite(RMPin4, LOW);
         analogWrite(5, 255);
       analogWrite(6, 200);
  }
    void sharpRight() {
  digitalWrite(LMPin1, LOW);
  digitalWrite(LMPin2, HIGH);
  digitalWrite(RMPin3, HIGH);
  digitalWrite(RMPin4, LOW);
         analogWrite(5, 255);
       analogWrite(6, 200);
  }
  void stops() {
  digitalWrite(LMPin1, HIGH);
  digitalWrite(LMPin2, HIGH);
  digitalWrite(RMPin3, HIGH);
  digitalWrite(RMPin4, HIGH);
  
} 
