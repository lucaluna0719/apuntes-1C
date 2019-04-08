#define LED1 11
#define LED2 9
#define TIEMPO 400

void setup() {
  // put your setup code here, to run once:
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  delay(TIEMPO);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  delay(TIEMPO);
 

}
void titilar(int pin, int veces, int tiempo);
{

 


  
}

