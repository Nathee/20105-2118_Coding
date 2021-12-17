int number = 5;

void setup()
{
    Serial.begin(115200);
}
void loop()
{
    // IF
    if (number == 5)
    {
        Serial.println("This is NUMBER 5");
    }
    // IF&ELSE
    if (number == 0)
    {
        Serial.println("This is NUMBER 0");
    }
    else
    {
        Serial.println("This is Not NUMBER 0");
    }
    // IF&ELSE IF&ELSE
    if (nameDay == "SUNDAY")
    {
        Serial.println("This is Sunday");
    }
    else if (nameDay == "MONDAY")
    {
        Serial.println("This is Monday");
    }
    else if (nameDay == "TUESDAY")
    {
        Serial.println("This is Tuesday");
    }
    else if (nameDay == "WEDNESDAY")
    {
        Serial.println("This is Wednesday");
    }
    else if (nameDay == "THURSDAY")
    {
        Serial.println("This is Thursday");
    }
    else if (nameDay == "FRIDAY")
    {
        Serial.println("This is Friday");
    }
    else if (nameDay == "SATURDAY")
    {
        Serial.println("This is Saturday");
    }
    else
    {
        Serial.println("ERROR");
    }
}