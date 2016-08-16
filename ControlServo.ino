/*
Talos Electronics
Rafael Lozano Rolón 
7/Septiembre/2015 
*/
#include <Servo.h> //Libreria para Servomotores

Servo Servo_1;  

int Angulo = 0;    // Variable que contendra el angulo de giro del servo

void setup() 
{ 
  Servo_1.attach(3);  // Definir el pin (3) que se utilizara para el control del servo
} 


void loop() 
{ 
  for(Angulo= 0;Angulo < 180; Angulo += 1)  //Incrementar de 1 en 1 el angulo que va de 0° hasta 180°
  {                                  
    Servo_1.write(Angulo);                  // Decirle al Servo_1 que se mueva los grados que estan en la variable angulo
    delay(15);                              // Esperar 15 ms para que el servo alcance la posicion
  } 
  delay(500);                                //Esperar 500 ms 
  for(Angulo = 180; Angulo>=1; Angulo-=1)    // Decrementar de 1 en 1 el angulo que va de 180° hasta 0°
  {                                
    Servo_1.write(Angulo);                   // Decirle al Servo_1 que se mueva los grados que estan en la variable angulo
    delay(15);                              // Esperar 15 ms para que el servo alcance la posicion
  } 
  delay(500);                        //Esperar 500 ms 
} 
