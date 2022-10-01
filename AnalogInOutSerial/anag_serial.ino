const int sensor_pin = A0, led_pin = 13;
int sensor_value = 0;

void setup(void)
{
    Serial.begin(9600);
    Serial.println("Programm initialization\n**************\n\tReading sensor value..");
}

void loop(void)
{
    sensor_value = analogRead(sensor_pin);
    Serial.println(sensor_value);
    digitalWrite(led_pin, HIGH);
    delay(sensor_value);
    digitalWrite(led_pin, LOW);
    delay(sensor_value);
}