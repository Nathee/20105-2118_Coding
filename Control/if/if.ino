int number = 0;

void setup()
{
    Serial.begin(115200);
}
void loop()
{
    if (number == 5)
    {
        Serial.println("This is NUMBER 5");
    }
}