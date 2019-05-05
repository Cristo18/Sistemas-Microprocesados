//Alejandro Ortega
int b1=7 ;
int b2=6 ;
int b3=5;
int on1=0 ;
int on2=0;
int on3=0;
int cont1=0;
int cont2=0;
int cont3=0;
int A=11 ;
int B=10 ;
int C=9 ;
int D=8 ;
int Dec1= 12 ;
int Uni1= 13 ;
int Dec2= 3 ;
int Uni2= 4 ;
int Dec3= 1 ;
int Uni3= 2 ;
int decenas1 ;
int unidades1 ;
int decenas2 ;
int unidades2 ;
int decenas3 ;
int unidades3 ;

void setup() {

  pinMode(b1,INPUT) ;
  pinMode(b2,INPUT) ;
  pinMode(b3,INPUT) ;
  pinMode (A,OUTPUT) ;
  pinMode (B,OUTPUT) ;
  pinMode (C,OUTPUT) ;
  pinMode (D,OUTPUT) ;
  pinMode (Dec1, OUTPUT) ;
  pinMode (Uni1, OUTPUT) ;
  pinMode (Dec2, OUTPUT) ;
  pinMode (Uni2, OUTPUT) ;
  pinMode (Dec3, OUTPUT) ;
  pinMode (Uni3, OUTPUT) ;

}

void loop() {
  
   if(digitalRead(b1)==LOW){
      delay(300) ; //Delay antirebotes, software => 200-500 ms, hardware => 15-30 ms
      on1=1-on1 ;     
      if(cont1<25)
        cont1 ++ ;
      else 
           cont1 = 0 ;

      contador1 (cont1) ;
           
           decenas1= cont1 /10 ;
           unidades1= cont1-decenas1*10 ;
           digitalWrite (Dec1,HIGH) ;
           digitalWrite (Uni1,LOW) ;
           contador1 (decenas1) ;
           delay (50) ;
           digitalWrite (Dec1, LOW) ;
           digitalWrite (Uni1, HIGH) ;
           contador1 (unidades1) ;
           delay (50) ;
}
  if(digitalRead(b2)==LOW){
      delay(300) ; //Delay antirebotes, software => 200-500 ms, hardware => 15-30 ms
      on2=1-on2 ;     
      if(cont2<25)
        cont2 ++ ;
      else 
           cont2 = 0 ;

      contador2 (cont2) ;

}
           
           decenas2= cont2 /10 ;
           unidades2= cont2-decenas2*10 ;
           digitalWrite (Dec2,HIGH) ;
           digitalWrite (Uni2,LOW) ;
           contador2 (decenas2) ;
           delay (50) ;
           digitalWrite (Dec2, LOW) ;
           digitalWrite (Uni2, HIGH) ;
           contador2 (unidades2) ;
           delay (50) ;
 
    
    if(digitalRead(b3)==LOW){
      delay(300) ; //Delay antirebotes, software => 200-500 ms, hardware => 15-30 ms
      cont3=on1+on2 ;     
      contador3 (cont3) ;

}
         decenas3= cont3 /10 ;
           unidades3= cont3-decenas3*10 ;
           digitalWrite (Dec3,HIGH) ;
           digitalWrite (Uni3,LOW) ;
           contador3 (decenas3) ;
           delay (50) ;
           digitalWrite (Dec3, LOW) ;
           digitalWrite (Uni3, HIGH) ;
           contador3 (unidades3) ;
           delay (50) ;
}

     void contador3 (int dato){ //No retorna algun , parentesis vacio no necesita parametro de entrada para que el metodo funcione
    switch (dato) {
      case 0 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, LOW) ;
      break ;
      case 1 :
      digitalWrite (A, HIGH) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, LOW) ;
      break ;
            case 2 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, HIGH) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, LOW) ;
      break ;
            case 3:
      digitalWrite (A, HIGH) ;
      digitalWrite (B, HIGH) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, LOW) ;
      break ;
            case 4 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, HIGH) ;
      digitalWrite (D, LOW) ;
      break ;
            case 5 :
      digitalWrite (A, HIGH) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, HIGH) ;
      digitalWrite (D, LOW) ;
      break ;
             case 6 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, HIGH) ;
      digitalWrite (C, HIGH) ;
      digitalWrite (D, LOW) ;
      break ;
               case 7:
      digitalWrite (A, HIGH) ;
      digitalWrite (B, HIGH) ;
      digitalWrite (C, HIGH) ;
      digitalWrite (D, LOW) ;
      break ;
               case 8 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, HIGH) ;
      break ;
           case 9 :
      digitalWrite (A, HIGH) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, HIGH) ;
      break ;
}


}

     void contador2 (int dato){ //No retorna algun , parentesis vacio no necesita parametro de entrada para que el metodo funcione
    switch (dato) {
      case 0 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, LOW) ;
      break ;
      case 1 :
      digitalWrite (A, HIGH) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, LOW) ;
      break ;
            case 2 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, HIGH) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, LOW) ;
      break ;
            case 3:
      digitalWrite (A, HIGH) ;
      digitalWrite (B, HIGH) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, LOW) ;
      break ;
            case 4 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, HIGH) ;
      digitalWrite (D, LOW) ;
      break ;
            case 5 :
      digitalWrite (A, HIGH) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, HIGH) ;
      digitalWrite (D, LOW) ;
      break ;
             case 6 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, HIGH) ;
      digitalWrite (C, HIGH) ;
      digitalWrite (D, LOW) ;
      break ;
               case 7:
      digitalWrite (A, HIGH) ;
      digitalWrite (B, HIGH) ;
      digitalWrite (C, HIGH) ;
      digitalWrite (D, LOW) ;
      break ;
               case 8 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, HIGH) ;
      break ;
           case 9 :
      digitalWrite (A, HIGH) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, HIGH) ;
      break ;
}


}

  
    void contador1 (int dato){ //No retorna algun , parentesis vacio no necesita parametro de entrada para que el metodo funcione
    switch (dato) {
      case 0 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, LOW) ;
      break ;
      case 1 :
      digitalWrite (A, HIGH) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, LOW) ;
      break ;
            case 2 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, HIGH) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, LOW) ;
      break ;
            case 3:
      digitalWrite (A, HIGH) ;
      digitalWrite (B, HIGH) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, LOW) ;
      break ;
            case 4 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, HIGH) ;
      digitalWrite (D, LOW) ;
      break ;
            case 5 :
      digitalWrite (A, HIGH) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, HIGH) ;
      digitalWrite (D, LOW) ;
      break ;
             case 6 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, HIGH) ;
      digitalWrite (C, HIGH) ;
      digitalWrite (D, LOW) ;
      break ;
               case 7:
      digitalWrite (A, HIGH) ;
      digitalWrite (B, HIGH) ;
      digitalWrite (C, HIGH) ;
      digitalWrite (D, LOW) ;
      break ;
               case 8 :
      digitalWrite (A, LOW) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, HIGH) ;
      break ;
           case 9 :
      digitalWrite (A, HIGH) ;
      digitalWrite (B, LOW) ;
      digitalWrite (C, LOW) ;
      digitalWrite (D, HIGH) ;
      break ;
}


}
