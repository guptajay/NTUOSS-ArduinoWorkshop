// Measuring the Speed of Sound

// Ultrasonic Sensor PIN Configuration
int trigPin = 13;
int echoPin = 11;

// Measuring Ping Time
float pingTime;

float speedOfSound;

// Object Distance from Ultrasonic Sensor (in Inches)
float targetDistance = 6;

void setup()
{
  
  Serial.begin(9600);
  
  // Ultrasonic Sensor PIN Configuration
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
}

void loop()
{
  
  // Generate a Pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2000); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  
  // Measure Ping Time
  pingTime = pulseIn(echoPin, HIGH);
  
  // Calculating Speed of Sound
  speedOfSound = 2 * targetDistance / pingTime;
  speedOfSound = speedOfSound / 63360 * 1000000 * 3600;
  speedOfSound = speedOfSound * 0.44;
  
  Serial.print("The speed of sound is ");
  Serial.print(speedOfSound);
  Serial.println(" m/s");
  
  delay(3000);
  
}
