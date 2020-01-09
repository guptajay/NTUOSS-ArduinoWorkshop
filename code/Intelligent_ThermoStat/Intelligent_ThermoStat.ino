// Hot Temperature (in Farenheit)
const int hot = 87; 

// Cold Temperature (in Farenheit)
const int cold = 75;

void setup() {
  
  pinMode(A2, INPUT); // Temperature Sensor
  pinMode(2, OUTPUT); // Blue LED - Indicate Cold
  pinMode(3, OUTPUT); // Green LED - Indicate Neutral
  pinMode(4, OUTPUT); // Red LED - Indicate Hot
  Serial.begin(9600);
  
}

void loop() {
  
  int sensor = analogRead(A2);
  
  // Voltage Conversion
  float voltage = (sensor / 1024.0) * 5.0;
  float tempC = (voltage - .5) * 100;
  
  // Farenheit to Celcius Conversion
  float tempF = (tempC * 1.8) + 32;
  Serial.print("temp: ");
  Serial.print(tempF);
  
  if (tempF < cold) {
    // It is Cold
    digitalWrite(2, HIGH); // Blue LED On
    digitalWrite(3, LOW); // Green LED Off
    digitalWrite(4, LOW); // Red LED Off
    Serial.println(" It is Cold");
  }
  
  else if (tempF >= hot) {
    // It is Hot
    digitalWrite(2, LOW); // Blue LED Off
    digitalWrite(3, LOW); // Green LED Off
    digitalWrite(4, HIGH); // Red LED On
    Serial.println(" It is Hot.");
  }
  else { 
    // It is Neutral
    digitalWrite(2, LOW); // Blue LED Off
    digitalWrite(3, HIGH); // Green LED On
    digitalWrite(4, LOW); // Red LED Off
    Serial.println(" It is Fine.");
  }
  
  delay(100);
  
}
