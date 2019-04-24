            //Alejandro Ortega
int leds [8]={0,1,2,3,4,5,6,7};
int ledsc [8]={7,6,5,4,3,2,1,0};
int juego1 [8]={1,0,1,0,1,0,1,0};
int juego2 [8]={0,1,0,1,0,1,0,1};

int ledsa [8]={7,0,1,2,3,4,5,6};
int ledsb [8]={0,7,6,5,4,3,2,1};

void setup() {
 for (int i=0;i<8;i++){
 pinMode(leds[i],OUTPUT);
}
}

void loop() {
  
  //Juego 1 encenender y apagar pares
      for(int h=0; h<4; h++){
   for(int i=0;i<8;i++){
      digitalWrite(leds[i],juego1[i]);      
      }
      delay(200);
    for(int i=0;i<8;i++){
      digitalWrite(leds[i],LOW);      
      }
      delay(200);
      }
      
      delay(1000);
  
  //Juego 2 encender y apagar impares
      for(int h=0; h<4; h++){  
   for(int i=0;i<8;i++){
      digitalWrite(leds[i],juego2[i]);      
      }
      delay(200);
     for(int i=0;i<8;i++){
      digitalWrite(leds[i],LOW);      
      }
      delay(200);
      }
      delay(1000);

    //Juego 3 
          for(int j=0;j<2;j++){
      for(int i=0;i<8;i++){
      digitalWrite(leds[i],HIGH);      
      delay(100);
      }
      for(int i=0;i<8;i++){
      digitalWrite(leds[i],LOW);      
      delay(100);
      }}
      
      delay(1000);

      //Juego 4
          for(int j=0;j<2;j++){
      for(int i=0;i<8;i++){
      digitalWrite(leds[i],HIGH);      
      digitalWrite(ledsc[i],HIGH);      
      delay(100);
      }
      for(int i=0;i<8;i++){
      digitalWrite(leds[i],LOW);      
      digitalWrite(ledsc[i],LOW);      
      delay(100);
      }}
      
      delay(1000);
      
      //Juego 5
          for(int j=0;j<2;j++){
      for(int i=0;i<8;i++){
      digitalWrite(leds[i],HIGH);      
      digitalWrite(ledsc[i],HIGH);
      digitalWrite(ledsa[i],LOW);
      digitalWrite(ledsb[i],LOW);      
      delay(200);
      }
       for(int i=0;i<8;i++){
      digitalWrite(leds[i],LOW);      
      }
    }
      
      delay(1000);
      
      //Juego 6
          for(int j=0;j<10;j++){
          int n= random(0,8);
          digitalWrite(leds[n],HIGH);
          delay(200);
          digitalWrite(leds[n],LOW);
          delay(200);
          }
       
          delay(1000);
             
       //Juego 7
          for(int j=0;j<60;j++){
          int n= random(0,3);
          int m= random(3,6);
          int o= random(6,8);
          digitalWrite(leds[n],HIGH);
          digitalWrite(leds[m],HIGH);
          digitalWrite(leds[o],HIGH);
          delay(50);
          digitalWrite(leds[n],LOW);
          digitalWrite(leds[m],LOW);
          digitalWrite(leds[o],LOW);
          delay(50);
          }
      
          delay(1000);
      
}
