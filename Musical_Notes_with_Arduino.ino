const int buzzer = 8; // +ve to pin-8 and -ve to ground
const int sw = 9; // one point of switch to pin-9 and other to ground

void setup() 
{
 pinMode(buzzer, OUTPUT); // buzzer is output
 pinMode(sw, INPUT); // switch is input
 digitalWrite(sw,HIGH); // when switch is not pressed pin-9 is high
}

 // Standard frequencies of musical notes:
 // C4 = 261.63Hz, D4 = 293.66Hz, E4 = 329.63Hz, F4 = 349.23Hz,
 // G4 = 349.23Hz, A4 = 440.00Hz, B4 = 493.88Hz
 // C5 = 523.25Hz
 
void loop() 
{
  if(digitalRead(sw) == LOW)
   {
     tone(buzzer,261.63); // saa
     delay(200);
     noTone(buzzer);
     delay(200);
     tone(buzzer,293.66); // re
     delay(200);    
     noTone(buzzer);
     delay(200);
     tone(buzzer,329.63); // ga
     delay(200);    
     noTone(buzzer);
     delay(200);
     tone(buzzer,349.23); // ma
     delay(200);    
     noTone(buzzer);
     delay(200);
     tone(buzzer,392.00); // pa
     delay(200);    
     noTone(buzzer);
     delay(200);
     tone(buzzer,440.00); // dha
     delay(200);    
     noTone(buzzer);
     delay(200);
     tone(buzzer,493.88); // nee
     delay(200);    
     noTone(buzzer);
     delay(200);
     tone(buzzer,523.25); // sa#
     delay(200);    
     noTone(buzzer);
     delay(200);
   }
   else 
   {
     noTone(buzzer);
   }
}
