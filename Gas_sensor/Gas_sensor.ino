#define AO_PIN A0  // NodeMcu's pin connected to AO pin of the Gas sensor

void setup() {
  // initialize serial communication
  Serial.begin(9600);
  Serial.println("Warming up the sensor");
  delay(5000);  // wait for the sensor to warm up
}

void loop() {
  int gasValue = analogRead(AO_PIN);

  Serial.print("MQ5 sensor AO value: ");
  Serial.println(gasValue); //Prints gas value
}
