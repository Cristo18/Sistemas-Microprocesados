/*                 Universidad Tecnica del Norte
 *                 FICA- CIERCOM
 *                 Alejandro Ortega
 *                 Validar un numero de Cedula en Arduino, Utilizado Comunicacion Serial
*/            
       
String cedula;
String dato;
String a0;
String a1;
int coeficientes [] = {2, 1, 2, 1, 2, 1, 2, 1, 2};  //coeficientes para realizar la verificaciòn
int dat = 0;
int total = 0;
int tamanoLongitudCedula = 10;
int numeroProviancias = 24;
int tercerdigito = 6;

void setup() {
Serial.begin(9600);
Serial.println("INGRESE SU NUMERO DE CEDULA CON EL SIGNO (-) ANTES DEL ULTIMO DIGITO");
}

void loop() {
 
  if(Serial.available()>0 ){
  dato=Serial.readString();
  Serial.println(" ");
  a0=dato.substring(0,dato.indexOf("-"));
  Serial.println(a0);
  
  a1=dato.substring(dato.indexOf("-")+1,dato.length());
  Serial.println(a1);
 
  cedula=(a0+a1);
  Serial.println(cedula);




        if (cedula.length() == tamanoLongitudCedula) {  // si la longitud de un array es igual al tamaño de 10

          
            int provincia = (cedula.substring(0,2)).toInt(); // El carácter situado en la posición especificada, verificar los dos numero de la provincia
            int digitoTres = (cedula.substring(2,3)).toInt();  // verificar el digito tercero

            Serial.println("Numero de provincia");
            Serial.println(provincia);
            Serial.println("Tercer digito");
            Serial.println(digitoTres);
            
            if ((provincia > 0 && provincia <= numeroProviancias) && digitoTres < tercerdigito) {  //Comprueba si se cumplen las primeras condiciones
                int digitoVerificadorRecibido = (cedula.substring(9,10)).toInt();
                for (int i = 0; i < 9; i++) {
                    int valor = coeficientes[i] * (cedula.substring(i,i+1)).toInt();
                    total = valor >= 10 ? total + (valor - 9) : total + valor;
                }

                int digitoVerificadorObtenido = (total % 10) > 0 ? 10 - (total % 10) : (total % 10);

                if (digitoVerificadorObtenido == digitoVerificadorRecibido) {
                    Serial.println("El numero de cedula es CORRECTO");
                    dat = -1;
                } else {
                    Serial.println("El numero de cedula es INCORRECTO");
                }
            } else {
                Serial.println("El numero de cedula es INCORRECTO (Tercer digito o Numero de Provincia)");
            }
        } else {
            Serial.println("El numero de cedula es INCORRECTO (No contiene los 10 digitos)");
        }
      
      

  }

}
