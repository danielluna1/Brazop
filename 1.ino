  #include <Servo.h>  
  #define pinGarra 9
  #define pinDerecha 10
  #define pinBase 11
  #define pinIzquierda 12

  
     int angulo0 = 120;     
     int angulo1 = 90;     
     int angulo2 = 110;
     int angulo3 = 30;
  
   //los comentarios realizados son para explicar lo que el brazo esta realizando en el movimiento de los servos para terminar una buena practica de laboratorio
          
     Servo Garra;       
     Servo Derecha;        
     Servo Base;      
     Servo Izquierda;       


     void setup() { 
             Garra.attach(pinGarra);  // asigna el servo al pin 9
             Derecha.attach(pinDerecha);  // asigna el servo al pin 10
             Base.attach(pinBase);  // asigna el servo al pin 11
             Izquierda.attach(pinIzquierda);  // asigna el servo al pin 12
                   }

     void loop() 
     { 
 
  Garra.write(angulo2);      //  manda al servo la posicion
 delay(1000); 



//Modulo movimiento servo 9 (Garra) (abrir)
         
          for(int angulo3 = 30; angulo3 < 100; angulo3 += 1)    //  un ciclo para mover el servo entre los 50 y los 120 grados  
           {
             Garra.write(angulo3);                 //  manda al servo la posicion
          delay(25);                          //  espera unos milisegundos para que el servo llegue a su posicion
          }
           delay(1000); 

 //Modulo movimiento servo 10 (Brazo derecho) (subir)
        
            for(int angulo2 = 110; angulo2 >= 70; angulo2 -= 1)    //  un ciclo para mover el servo entre los 120 y los 50 grados  
            { 
            Derecha.write(angulo2);               //  manda al servo la posicion
            delay(25);                        //  espera unos milisegundos para que el servo llegue a su posicion
            }
            delay(1000);

  //Modulo movimiento servo 11 (Base) 
                
         for(int angulo0 = 120; angulo0 >= 50; angulo0 -= 1)     //  un ciclo para mover el servo entre los 120 y los 20 grados                             
          {
          Base.write(angulo0);                 //  manda al servo la posicion
          delay(25);                          //  espera unos milisegundos para que el servo llegue a su posicion
          }
  
          delay(1000); 

 //Modulo movimiento servo 10 (Brazo derecho) (bajar)
         
          for(int angulo2 = 70; angulo2 < 110; angulo2 += 1)    //  un ciclo para mover el servo entre los 50 y los 120 grados  
          { 
          Derecha.write(angulo2);               //  manda al servo la posicion
          delay(25);                        //  espera unos milisegundos para que el servo llegue a su posicion
          }
          delay(1000);                    //  espera unos milisegundos para que el servo llegue a su posicion

//Modulo movimiento servo 9 (Garra) (cerrar)
             
         for(int angulo3 = 100; angulo3 >= 30; angulo3 -= 1)     //  un ciclo para mover el servo entre los 120 y los 30 grados                             
          {
            Garra.write(angulo3);                 //  manda al servo la posicion
          delay(25);                          //  espera unos milisegundos para que el servo llegue a su posicion
          }
  
          delay(1000); 

//Modulo movimiento servo 10 (Brazo derecho) (subir)
        
            for(int angulo2 = 110; angulo2 >= 70; angulo2 -= 1)    //  un ciclo para mover el servo entre los 120 y los 50 grados  
            { 
            Derecha.write(angulo2);               //  manda al servo la posicion
            delay(25);                        //  espera unos milisegundos para que el servo llegue a su posicion
            }
            delay(1000);

//Modulo movimiento servo 11 (Base) (centrar)
         
          for(int angulo0 = 50; angulo0 < 120; angulo0 += 1)    //  un ciclo para mover el servo entre los 20 y los 120 grados  
          { 
          Base.write(angulo0);               //  manda al servo la posicion
          delay(25);                        //  espera unos milisegundos para que el servo llegue a su posicion
          }
          delay(1000);                    //  espera unos milisegundos para que el servo llegue a su posicion

//Modulo movimiento servo 10 (Brazo derecho) (bajar)
         
          for(int angulo2 = 70; angulo2 < 110; angulo2 += 1)    //  un ciclo para mover el servo entre los 50 y los 120 grados  
          { 
          Derecha.write(angulo2);               //  manda al servo la posicion
          delay(25);                        //  espera unos milisegundos para que el servo llegue a su posicion
          }
          delay(1000);                    //  espera unos milisegundos para que el servo llegue a su posicion
      } 
