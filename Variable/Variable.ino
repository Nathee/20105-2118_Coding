int number = 0; //ประกาศตัวแปรชื่อ number ชนิดตัวเลขจำนวนเต็ม

void setup()
{
    Serial.begin(115200);        //เริ่มติดต่อไมโครคอนโทรเลอร์กับคอมฯ
    Serial.println("Connected"); //ส่งข้อความไปยังคอมพิวเตอร์
}

void loop()
{
    Serial.print("Number is ");
    delay(1000); //หน่วงเวลา หน่วย(mill second)
}