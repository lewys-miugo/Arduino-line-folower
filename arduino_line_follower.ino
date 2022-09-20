int Motor_1_1=2;
int Motor_1_2=3;
int Motor_2_1=4;
int Motor_2_2=5;
int echo=A4;
int trig=A5;
int ena=9;
int enb=10;
int IR_sensor_1=12;
int IR_sensor_2=11;

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT); 
  analogWrite(ena,250);
  analogWrite(enb,250);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  
  delay(5000);

}
