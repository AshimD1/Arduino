float duration; // float to store decimal value 
float distance;
void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT); // trigger pin
pinMode(4,INPUT); // echo pin
Serial.begin(9600); // initializing serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(5,LOW); // trigger pin low
delay(2);
digitalWrite(5,HIGH); // trigger sends ultrasonic sound of 40000Hz
delay(10);
digitalWrite(5,LOW); // triger pin Low
duration = pulseIn(4,HIGH); // gets time requiured for sound from trigger to reach back to echo 
distance = duration * 0.034 / 2 ; //formula to claculate distance 
Serial.print("Distance: ");
Serial.println(distance); // prints distance

}
