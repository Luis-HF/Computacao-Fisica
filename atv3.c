void setup() {
  DDRC = 0xFF; 
  DDRD |= (1 << PD7);
  DDRD |= (1 << PD2);
  
  #A0 = A
  #A1 = B
  #A2 = C
  #A3 = D
  #A4 = E
  #A5 = F
  #7 = G

}

void loop() {
    PORTD |= (1 << PD7);
    PORTC |= (1 << 0xFF);
    PORTD |= (1 << PD2);
}