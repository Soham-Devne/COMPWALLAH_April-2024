const int trigpin=13;
const int echopin=12;
#define SOUND_SPEED 0.034
float distanceCm;
long duration;
void setup()
{
  pinMode(trigpin,INPUT);
  pinMode(echopin,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  duration = pulseIn(echopin, HIGH);
  distanceCm = duration * SOUND_SPEED / 2;
  Serial.println(distanceCm);
  delay(10000);
}