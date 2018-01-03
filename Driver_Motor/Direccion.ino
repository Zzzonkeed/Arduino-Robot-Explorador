
void derecha(uint8_t vel){
  analogWrite(pwmB, vel);
  digitalWrite(dirB_1, HIGH);
  digitalWrite(dirB_2, LOW);
  delay(1);
}

void izquierda(uint8_t vel){
  analogWrite(pwmB, vel);
  digitalWrite(dirB_1, LOW);
  digitalWrite(dirB_2, HIGH);
  delay(1);
}

