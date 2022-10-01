int sensor_pin = A0, sensor_value = 0;
const int led = 13;

void setup(void)
{
    pinMode(led, OUTPUT);
}

void loop(void)
{
    sensor_value = analogRead(sensor_pin);
    digitalWrite(led, HIGH);
    delay(sensor_value);
    digitalWrite(led, LOW);
    delay(sensor_value);
}