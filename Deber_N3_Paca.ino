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
String num1;
String num2;
String num3;
String num4;



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
            
            num1=(numeros.substring(0,1)); 
            num2=(numeros.substring(1,2)); // separamos los 4 numeros
            num3=(numeros.substring(2,3)); //
            num4=(numeros.substring(3,4));
            
            a0=letras.substring(0,1);
            a1=letras.substring(1,2);// separamos las 3 letras
            a2=letras.substring(2,3);
           
            
                 if ((num1=="0" || num1=="1" || num1=="2" || num1=="3" || num1=="4" || num1=="5" || num1=="6" || num1=="7" || num1=="8" || num1=="9")
                  and(num2=="0" || num2=="1" || num2=="2" || num2=="3" || num2=="4" || num2=="5" || num2=="6" || num2=="7" || num2=="8" || num2=="9")
                  and(num3=="0" || num3=="1" || num3=="2" || num3=="3" || num3=="4" || num3=="5" || num3=="6" || num3=="7" || num3=="8" || num3=="9")
                  and(num4=="0" || num4=="1" || num4=="2" || num4=="3" || num4=="4" || num4=="5" || num4=="6" || num4=="7" || num4=="8" || num4=="9")
                  and(a0=="A" || a0=="B" || a0=="C" || a0=="D" || a0=="E" || a0=="F" || a0=="G" || a0=="H" || a0=="I" || a0=="J" || 
                      a0=="K" || a0=="L" || a0=="M" || a0=="N" || a0=="Ñ" || a0=="O" || a0=="P" || a0=="Q" || a0=="R" || a0=="S" || 
                      a0=="T" || a0=="U" || a0=="V" || a0=="W" || a0=="X" || a0=="Y" || a0=="Z")
                  and(a1=="A" || a1=="B" || a1=="C" || a1=="D" || a1=="E" || a1=="F" || a1=="G" || a1=="H" || a1=="I" || a1=="J" || 
                      a1=="K" || a1=="L" || a1=="M" || a1=="N" || a1=="Ñ" || a1=="O" || a1=="P" || a1=="Q" || a1=="R" || a1=="S" || 
                      a1=="T" || a1=="U" || a1=="V" || a1=="W" || a1=="X" || a1=="Y" || a1=="Z")
                  and(a2=="A" || a2=="B" || a2=="C" || a2=="D" || a2=="E" || a2=="F" || a2=="G" || a2=="H" || a2=="I" || a2=="J" || 
                      a2=="K" || a2=="L" || a2=="M" || a2=="N" || a2=="Ñ" || a2=="O" || a2=="P" || a2=="Q" || a2=="R" || a2=="S" || 
                      a2=="T" || a2=="U" || a2=="V" || a2=="W" || a2=="X" || a2=="Y" || a2=="Z")   ){//No numeros en Texto y no letras en numeros
                Serial.println(" ");
                Serial.print("El numero de placa ");
                Serial.print(dato);
                Serial.print(" es CORRECTO");
                Serial.println(" ");
                let1=letras.substring(0,1);
//                Serial.println(let1);
                provincia(let1);
    
                let2=letras.substring(1,2);
//                Serial.println(let2);
                tipo(let2);
                Serial.println(" ");
                delay(100);
                Serial.println("INGRESE SU NUMERO DE PLACA DE LA FORMA 'AAA-1234'"); 
                
                }
              else{
            Serial.println("El numero es INCORRECTO hay numeros en las letras y/o viseversa");
            Serial.println("INGRESE SU NUMERO DE PLACA DE LA FORMA 'AAA-1234'");              
                }
        } 
      else{
          Serial.println("El numero es INCORRECTO no contiene los digitos adecuados ");
          Serial.println("INGRESE SU NUMERO DE PLACA DE LA FORMA 'AAA-1234'");
          }
          
    
    }
}

void provincia(String dat){ //Todas las provinvias
        if (dat=="A"){
  Serial.println("La provincia es AZUAY");  
    }
   else if (dat=="B"){
  Serial.println("La provincia es BOLIVAR");  
    }
   else if (dat=="U"){
  Serial.println("La provincia es CAÑAR");  
    }  
   else if (dat=="C"){
  Serial.println("La provincia es CARCHI");  
    }
   else if (dat=="H"){
  Serial.println("La provincia es CHIMBORAZO");  
    }
   else if (dat=="X"){
  Serial.println("La provincia es COTOPAXI");  
    }  
   else if (dat=="O"){
  Serial.println("La provincia es EL ORO");  
    }
   else if (dat=="E"){
  Serial.println("La provincia es ESMERALDAS");  
    }
   else if (dat=="W"){
  Serial.println("La provincia es GALAPAGOS");  
    }
   else if (dat=="G"){
  Serial.println("La provincia es GUAYAS");  
    }
   else if (dat=="I"){
  Serial.println("La provincia es IMBABURA");  
    }
   else if (dat=="L"){
  Serial.println("La provincia es LOJA");  
    }
   else if (dat=="R"){
  Serial.println("La provincia es LOS RIOS");  
    }
   else if (dat=="M"){
  Serial.println("La provincia es MANABI");  
    }
   else if (dat=="V"){
  Serial.println("La provincia es MORONA SANTIAGO");  
    }
   else if (dat=="N"){
  Serial.println("La provincia es NAPO");  
    }
   else if (dat=="Q"){
  Serial.println("La provincia es ORELLANA");  
    }
   else if (dat=="S"){
  Serial.println("La provincia es PASTAZA");  
    }
   else if (dat=="P"){
  Serial.println("La provincia es PICHINCHA");  
    }
   else if (dat=="Y"){
  Serial.println("La provincia es SANTA ELENA");  
    }
   else if (dat=="J"){
  Serial.println("La provincia es SANTO DOMINGO DE LOS TSACHILAS");  
    }
   else if (dat=="K"){
  Serial.println("La provincia es SUCUMBIOS");  
    }
   else if (dat=="T"){
  Serial.println("La provincia es TUNGURAHUA");  
    }
   else if (dat=="Z"){
  Serial.println("La provincia es ZAMORA CHINCHIPE");  
    }
    else{
  Serial.println("INCORRECTO el numero de placa no pretenece a ECUADOR");    
      }
  }

  void tipo(String tip){
    if(tip=="A"||tip=="U"||tip=="Z"){
      Serial.println("Tipo: Vehiculo Comercial (Taxi o Autobus) ");
      }
    else if(tip=="E"){
      Serial.println("Tipo: Vehiculo Gubernamental");
      }
    else if(tip=="X"){
      Serial.println("Tipo: Vehiculo de uso Oficial");
      }
    else if(tip=="M"){
      Serial.println("Tipo: Vehiculo de Gobiernos Autonomos Decentralisados");
      }
    else{
      Serial.println("Tipo: Vehiculo Particular (Privado)");
      }
    }
