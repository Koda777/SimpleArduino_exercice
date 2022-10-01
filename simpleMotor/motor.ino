const int pin_motor = 9;

void setup(void)
{
    pinMode(pin_motor, OUTPUT);
}

void loop(void)
{
    digitalWrite(pin_motor, HIGH);
}