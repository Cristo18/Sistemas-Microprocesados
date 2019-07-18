#include <LiquidCrystal.h>
#include <MsTimer2.h>
#include <EEPROM.h>
/*                    Universidad Tecnica del Norte
 *                     FICA -CIERCOM
 *                     Alejandro Ortega
 *                     Estimados estudiantes: Realice un sistema reloj con alarma almacenada en la EEPROM. 
 * 
*/
int segundos=0;
int minutos=0;
int horas=0;
int i,j,k;
int h,m,s;
int tam;


String CX;

LiquidCrystal lcd(13,12,11,10,9,8);



void setup() {
Serial.begin(9600);
lcd.begin(16,2);
attachInterrupt(0,apagar,FALLING);
MsTimer2::set(1000,reloj);
MsTimer2::start();
i=EEPROM.read(1);
j=EEPROM.read(2);
h=EEPROM.read(3);
  lcd.setCursor(0,0);
  lcd.print("RELOJ");
   Serial.print("Alarma:");
   Serial.print(EEPROM.read(1));
   Serial.print(":");
   Serial.print(EEPROM.read(2));
   Serial.print(":");
   Serial.println(EEPROM.read(3));

  Serial.println(" ");
  Serial.println("Ingrese la Hora para la alarma con el formato HH:MM:SS");
  Serial.println("Ejemplo: 15:30:00");
   
     
  }

void loop() {
  
//Guardar Alarma-----------------------------------
  if(Serial.available()>0){
  CX=Serial.readString();
  tam=CX.length();
  if(tam==8){
    h=CX.substring(0,2).toInt();
    m=CX.substring(3,5).toInt();
    s=CX.substring(6,8).toInt();
    

    if((h<=24 and h>=0)and(m<=60 and m>=0)and(s<=60 and h>=0)){

      Serial.println("alarma guardada");
   Serial.println(" ");
   Serial.print(h);
   Serial.print(":");
   Serial.print(m);
   Serial.print(":");
   Serial.println(s);
       EEPROM.write(1,h);
       EEPROM.write(2,m);
       EEPROM.write(3,s);
      }
         else{
  
  Serial.println("ERROR");
  Serial.println("Ingrese la Hora para la alarma con el formato HH:MM:SS");
  Serial.println("Ejemplo: 15:30:00");
              }
    }
  else{
    Serial.println("ERROR");
  Serial.println("Ingrese la Hora para la alarma con el formato HH:MM:SS");
  Serial.println("Ejemplo: 15:30:00");
    }
  }
  

}

void reloj(){
  segundos++;
   actualizar();
   
  lcd.setCursor(0,1);
  lcd.print(horas);
  lcd.setCursor(2,1);
  lcd.print(":");
  lcd.setCursor(3,1);
  lcd.print(minutos);
  lcd.setCursor(5,1);
  lcd.print(":");
  lcd.setCursor(6,1);
  lcd.print(segundos);
  
  
//Validar Alarma--------------------------------------
    if((h==horas)and(m==minutos)and(s==segundos)){
    Serial.println("Sonando");
    tone(2, 600, 2000);      
      }}
  
 
void actualizar(){
  minutos+=segundos/60;
  if (minutos==60){
    minutos=0;
    }
  horas+=minutos/60;
  if (horas==24){
    horas=0;
    }
  if (segundos==60){
    segundos=0;
    }  
  }

  void apagar(){
    Serial.println("Sonando");
    noTone(2);      
     
    }
