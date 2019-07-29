#include<avr/wdt.h>
#include <MsTimer2.h>
#include <LiquidCrystal.h>
#include <EEPROM.h>
/*                Universidad Tecncia del Norte
 *                 FICA - CIERCOM
 *                 Alejandro Ortega
 *                 Estimados estudiantes: Realizar un programa que reinicie el sistema al tener la hora 00:10:50. 
 *                 Cuando vuelva a funcionar, deberá empezar con la hora 00:11:10. Es proceso se observa en una LCD.
*/

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
int segundos=0;
int minutos=0;
int horas=0;
int h=0;
int i=0;
void setup() {

Serial.begin(9600);
lcd.begin(16,2);
MsTimer2::set(10,reloj);

h=EEPROM.read(0);

lcd.setCursor(0,0);
lcd.print("RELOJ");

if (h==1){
segundos=10;
minutos=11;
horas=0;  
MsTimer2::start();
  }
    else{
        MsTimer2::start();
         }
}

void loop() {
//i++;
//delay(1000);
Serial.println(EEPROM.read(0));

  if((minutos == 10) and (segundos==50 )and( horas==0)){
    MsTimer2::stop();    
    lcd.clear();
    EEPROM.write(1,1);
    if(i==670){
      wdt_enable(WDTO_500MS);
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
  }

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
