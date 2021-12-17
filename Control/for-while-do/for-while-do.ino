int number = 5;

void setup()
{
    Serial.begin(115200);
}
void loop()
{
    // FOR
    for (int i = 0; i < 10; i++)
    {
        Serial.println(i);
    }
    Serial.println("___________________________________________");
    delay(1000);

    // WHILE
    while (1)
    {
        Serial.println("WHILE");
        delay(200);
    }

    // DO WHILE
    do
    {
        Serial.println(number);
        delay(200);
    } while (number == 5);
    Serial.println("NO LOOP");
    delay(200);
}