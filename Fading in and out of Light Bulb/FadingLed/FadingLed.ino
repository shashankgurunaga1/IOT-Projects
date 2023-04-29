int led1= 9; 
int brightness = 0; 
int fade = 5; 
void setup() {
   
   pinMode(led1, OUTPUT);
}



void loop() {
  
   analogWrite(led1, brightness);
   
   brightness = brightness + fade;
   
   if (brightness == 0 || brightness == 255) {
      fade = -fade;
   }
  
   delay(400);
}