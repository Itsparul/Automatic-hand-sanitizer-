const int ir1 = 8;
const int motor1 = 12;
int motor_state1 = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(ir1,INPUT);
pinMode(motor1,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
motor_state1 = digitalRead(ir1);

if(motor_state1== LOW)
{
        digitalWrite(motor1,HIGH);
          delay(1000);
        
    
    }

    
if(motor_state1== HIGH)
{
        digitalWrite(motor1,LOW);
        delay(1000);
       
        
    
}  }
