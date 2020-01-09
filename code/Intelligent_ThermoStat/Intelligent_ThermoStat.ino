// Hot Temperature (in Celsius)
const int hot = 35; 

// Cold Temperature (in Celsius)
const int cold = 20;

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
  
  Serial.print("Temperature Detected: ");
  Serial.println(tempC);
  
  if (tempC < cold) {
    // It is Cold
    digitalWrite(2, HIGH); // Blue LED On
    digitalWrite(3, LOW); // Green LED Off
    digitalWrite(4, LOW); // Red LED Off
    Serial.println(" It is Cold");
  }
  
  else if (tempC >= hot) {
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
  
  delay(1000);
  
}
