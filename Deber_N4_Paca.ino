/*                 Universidad Tecnica del Norte    
 *                 FICA- CIERCOM
 *                 Alejandro Ortega
 *                 Realizar una validación de placa de vehículo donde indique: 
 *                 *La provincia 
 *                 *si ha registrado los 4 dígitos necesarios. 
 *                 *si no tiene números en la parte de las letras.
*/
String letras;
String numeros;
String dato;
String let1;
String let2;
String a0;
String a1;
String a2;
int num1;
int num2;
int num3;
int numero;
int le2;

void setup() {
  Serial.begin(9600);
  Serial.println("INGRESE SU NUMERO DE PLACA DE LA FORMA 'AAA-1234'");
}

void loop() {
  
  if(Serial.available()>0 ){
  delay(30);
  dato=Serial.readString();
  letras=dato.substring(0,dato.indexOf("-"));
  Serial.println(" ");
  Serial.println(letras);
  numeros=dato.substring(dato.indexOf("-")+1,dato.length());
  Serial.println(numeros);
      
      if(letras.length()==3 && numeros.length()==4){//Tamaño del texto
            
//            num1=(letras.substring(0,1)).toInt(); //
//            num2=(letras.substring(1,2)).toInt(); // Tres primeras letras a numeros
//            num3=(letras.substring(2,3)).toInt(); //
//            numero= num1+num2+num3;


//            a0=letras.substring(0,1);
//            a1=letras.substring(1,2);
//            a2=letras.substring(2,3);
//            
//            le2=numeros.toInt();// String a enteros          


//                 if (a0 == 'A'  && a1 == 'A'  && a2 == 'A'  && le2== 1234){//No numeros en Texto y no letras en numeros
                Serial.println(" ");
                Serial.print("El numero ");
                Serial.print(dato);
                Serial.print(" es CORRECTO");
                Serial.println(" ");
                let1=letras.substring(0,1);
                Serial.println(let1);
                provincia(let1);
    
                let2=letras.substring(1,2);
                Serial.println(let2);
                tipo(let2);
                Serial.println(" ");
                delay(100);
                Serial.println("INGRESE SU NUMERO DE PLACA DE LA FORMA 'AAA-1234'"); 
                
//                }
//              else{
//            Serial.println("El numero es INCORRECTO hay numeros en las letras y/o viseversa");
//            Serial.println("INGRESE SU NUMERO DE PLACA DE LA FORMA 'AAA-1234'");              
//                }
        } 
      else{
          Serial.println("El numero es INCORRECTO no contiene los digitos adecuados ");
          Serial.println("INGRESE SU NUMERO DE PLACA DE LA FORMA 'AAA-1234'");
          }
          
    
    }
}

void provincia(String dat){ //Todas las provinvias
  if (dat='A'){
  Serial.println("La provincia es AZUAY");  
    }
  if (dat='B'){
  Serial.println("La provincia es BOLIVAR");  
    }
  if (dat=='U'){
  Serial.println("La provincia es CAÑAR");  
    }  
  if (dat=='C'){
  Serial.println("La provincia es CARCHI");  
    }
    if (dat=='H'){
  Serial.println("La provincia es CHIMBORAZO");  
    }
    if (dat=='X'){
  Serial.println("La provincia es COTOPAXI");  
    }  
    if (dat=='O'){
  Serial.println("La provincia es EL ORO");  
    }
    if (dat=='E'){
  Serial.println("La provincia es ESMERALDAS");  
    }
    if (dat=='W'){
  Serial.println("La provincia es GALAPAGOS");  
    }
    if (dat=='G'){
  Serial.println("La provincia es GUAYAS");  
    }
    if (dat=='I'){
  Serial.println("La provincia es IMBABURA");  
    }
    if (dat=='L'){
  Serial.println("La provincia es LOJA");  
    }
    if (dat=='R'){
  Serial.println("La provincia es LOS RIOS");  
    }
    if (dat=='M'){
  Serial.println("La provincia es MANABI");  
    }
    if (dat=='V'){
  Serial.println("La provincia es MORONA SANTIAGO");  
    }
    if (dat=='N'){
  Serial.println("La provincia es NAPO");  
    }
    if (dat=='Q'){
  Serial.println("La provincia es ORELLANA");  
    }
    if (dat=='S'){
  Serial.println("La provincia es PASTAZA");  
    }
    if (dat=='P'){
  Serial.println("La provincia es PICHINCHA");  
    }
    if (dat='Y'){
  Serial.println("La provincia es SANTA ELENA");  
    }
    if (dat='J'){
  Serial.println("La provincia es SANTO DOMINGO DE LOS TSACHILAS");  
    }
    if (dat='K'){
  Serial.println("La provincia es SUCUMBIOS");  
    }
    if (dat='T'){
  Serial.println("La provincia es TUNGURAHUA");  
    }
    if (dat='Z'){
  Serial.println("La provincia es ZAMORA CHINCHIPE");  
    }
    else{
  Serial.println("INCORRECTO el numero de placa no pretenece a ECUADOR");    
      }
  }

  void tipo(String tip){
    if(tip=='A'||tip=='U'||tip=='Z'){
      Serial.println("Tipo: Vehiculo Comercial (Taxi o Autobus) ");
      }
    if(tip=='E'){
      Serial.println("Tipo: Vehiculo Gubernamental");
      }
    if(tip=='X'){
      Serial.println("Tipo: Vehiculo de uso Oficial");
      }
    if(tip=='M'){
      Serial.println("Tipo: Vehiculo de Gobiernos Autonomos Decentralisados");
      }
    else{
      Serial.println("Tipo: Vehiculo Particular (Privado)");
      }
    }
