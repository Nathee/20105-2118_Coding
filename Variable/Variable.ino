int number = 8.22; //ประกาศตัวแปรชื่อ number ชนิดตัวเลขจำนวนเต็ม
float myPoint = 0;
void setup()
{
    Serial.begin(115200);        //เริ่มติดต่อไมโครคอนโทรเลอร์กับคอมฯ
    Serial.println("Connected"); //ส่งข้อความไปยังคอมพิวเตอร์
}

void loop()
{
    Serial.print("Number is "); //แสดงข้อความออกทางหน้าจอ
    Serial.println(number);     //แสดงค่าที่อยู่ในตัวแปร number

    Serial.println(myPoint);
    delay(1000); //หน่วงเวลา หน่วย(mill second)
}