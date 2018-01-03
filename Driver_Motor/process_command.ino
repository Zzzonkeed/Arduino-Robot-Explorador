/*
 * Comando recibido
 * 1:100&3:100
 * 1 o 2 significa el sentido de movimiento
 * 1: Adelante
 * 2: Atras
 * 100 es la velocidad en PWM con maximo de 255
 * 
 * 3 o 4 es la direccion
 * 3: Derecha
 * 4: Izquierda
 * 100 es la velocidad en PWM con maximo de 255
 */
//Tamaño del comando recivido

int action;
int motor_speed;

void process_com(){
  action=input[0];
  motor_speed=input[1];
  
  // Do something
  switch(action){
    case 1: //Adelante
    //Serial.print("avance adelante a: ");
    //Serial.println(motor_speed);
    digitalWrite(dirA_1, HIGH);
    digitalWrite(dirA_2, LOW);
    break;

    case 2: //Atras
    //Serial.print("avance atras a: ");
    //Serial.println(motor_speed);
    digitalWrite(dirA_1, LOW);
    digitalWrite(dirA_2, HIGH);
    break;

    case 3: //Derecha
    //Serial.print("giro derecha a: ");
    //Serial.println(motor_speed);
    digitalWrite(dirB_1, HIGH);
    digitalWrite(dirB_2, LOW);
    break;

    case 4: //Izquierda
    //Serial.print("giro izquierda a: ");
    //Serial.println(motor_speed);
    digitalWrite(dirB_1, LOW);
    digitalWrite(dirB_2, HIGH);
    break;

    default:
    break;
   }
}
