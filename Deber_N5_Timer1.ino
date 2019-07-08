#include <TimerOne.h>

/*                    UNIVERSIDAD TECNICA DEL NORTE
 *                     FICA - CIERCOM
 *                     Alejandro Ortega
 *                     Realizar un programa de seguridad domótica que permita encender las luces 
 *                     de un domicilio de 5 habitaciones de forma aleatoria solo en horario nocturno. 
 *                     El sistema se activa al ingresar una contraseña por comunicación serial.
 * 
 *  
*/

int hora=5;
int leds [5]={2,3,4,5,6};
int j=0;
String pass="1234";
String CX;

void setup() {
for (int i=0;i<5;i++){
 pinMode(leds[i],OUTPUT);
}
Serial.begin(9600);
Timer1.initialize(1000000);
Timer1.attachInterrupt(reloj);
 Timer1.stop();
Serial.println("Ingrese la contraseña para activar luces en horario nocturno");
}

void loop() { 
if(Serial.available()>0){
  CX=Serial.readString();
if(CX.equals(pass)){ 
    Serial.println("CORRECTO");
    Timer1.start();
    
}
    else{
   Serial.println("INCORRECTO");
    Timer1.stop();
}

}}
void reloj(){ //Cada hora equivale a un segundo para poder visualizar las luces
hora++;
Serial.println(hora);

if(hora==24){
  hora=0;
  }
if(hora==1){
  Serial.println("MADRUGADA");
  }
if(hora==6){
  Serial.println("DIA");
  }
if(hora==12){
  Serial.println("TARDE");
  }
if(hora==19){
  Serial.println("NOCHE");
  }
if(hora>=19 || hora<6){
   for(int p=0;p<5;p++){  
          int n= random(0,6);
          digitalWrite(leds[n],HIGH);
          delay(100);
}
}else{
   for(int o=0;o<5;o++){  
       digitalWrite(leds[o],LOW);
  }}
}
