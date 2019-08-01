#include <avr/power.h>
#include <avr/sleep.h>
#include <MsTimer2.h>
#include<avr/wdt.h>

/*                            Universidad Tecnica del Norte
 *                             FICA - CIERCOM
 *                             Alejandro Ortega
 *                            Realizar un sistema que permita en intervalos de tiempo (puede ser cada 2 segundos )establecidos, 
 *                            dormir al sistema y levantarse para lecturas de un conversor análogo digital. 
 *                            Toma la lectura, la envía por comunicación serial y se vuelve a dormir.
*/


int i;
int j=0;
int tiempo=2; //En segundos

void setup() {
  Serial.begin(9600);
  MsTimer2::set(1000,contador);
  MsTimer2::start();  
}

void loop() {
}

void contador(){
  j++;
  if(j==1){
  power_adc_disable();
  power_usart0_disable();
  }
  if(j==tiempo){
    power_adc_enable();
    power_usart0_enable();
    Serial.println("Despierto");
    Serial.print("Dato: ");
    Serial.println(analogRead(0));
    Serial.println("");
    j=0;
    }  
  }
