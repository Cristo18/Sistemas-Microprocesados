#include <Keypad.h>
#include <LiquidCrystal.h>

/*                          Universidad Tecnica del Norte
 *                           FICA - CIERCOM
 *                           Alejandro Ortega
 *                           
 *      Funcionamiento del teclado matricial y validar la una contraseña de 4 dígitos visualizado en una lcd.
 *                           
*/
const byte ROWS=4;
const byte COLS=4;
char keys [ROWS][COLS]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','8','#','D'}
  };
byte rowPins[ROWS]={2,3,4,5};
byte colPins[COLS]={6,7,8,9};

LiquidCrystal lcd (A0,A1,13,12,11,10);

Keypad teclado = Keypad( makeKeymap(keys),rowPins,colPins,ROWS,COLS);
String tecla;
String pass="1234";
int tam;
String aa="";

void setup() {
Serial.begin(9600);
lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("   BIENVENIDO");
  lcd.setCursor(0,1);
  lcd.print("  ++PASSWORD++");
}

void loop() {
tecla =teclado.getKey();
if(tecla != ""){
  lcd.setCursor(0,0);
  lcd.print("               ");
  lcd.setCursor(0,1);
  lcd.print("               ");
  aa=aa+tecla;
  tecla="";
  tam=aa.length();
  Serial.println(aa);
  con(tam);
  }
}

void con(int i){
  switch(i){

    case 1:
    lcd.setCursor(0,0);
    lcd.print("Contrasenia");
    lcd.setCursor(0,1);
    lcd.print("*_");
    break;
    
    case 2:
    lcd.setCursor(0,0);
    lcd.print("Contrasenia");
    lcd.setCursor(0,1);
    lcd.print("**_");
    break;
    
    case 3:
    lcd.setCursor(0,0);
    lcd.print("Contrasenia");
    lcd.setCursor(0,1);
    lcd.print("***_");
    break;
    
    case 4:
     if(aa.equals(pass)){
        lcd.setCursor(0,0);
        lcd.print("Correcto");
        delay(200);
        aa="";
        }
      else{
        lcd.setCursor(0,0);
        lcd.print("Incorrecto");
        delay(200);
        aa="";
    }
      break;
  }}
