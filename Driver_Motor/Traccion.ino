void init_pin(){
  pinMode(pwmA, OUTPUT);
  pinMode(dirA_1, OUTPUT);
  pinMode(dirA_2, OUTPUT);

  pinMode(pwmB, OUTPUT);
  pinMode(dirB_1, OUTPUT);
  pinMode(dirB_2, OUTPUT);

  pinMode(LED, OUTPUT);
}


void timer_set(){
  
}


void adelante(uint8_t vel){
  analogWrite(pwmA, vel);
  digitalWrite(dirA_1, HIGH);
  digitalWrite(dirA_2, LOW);
  delay(1);
}

void atras(uint8_t vel){
  analogWrite(pwmA, vel);
  digitalWrite(dirA_1, LOW);
  digitalWrite(dirA_1, HIGH);
  delay(1);
}



