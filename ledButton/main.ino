const int button_pin = 2, led = 13;
int button_state = 0;

void setup(void)
{
    pinMode(led, OUTPUT);
    pinMode(button_pin, INPUT);
}

void loop(void)
{
    button_state = digitalRead(button_pin);
    digitalWrite(led, button_state);
}