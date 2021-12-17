<<<<<<< HEAD
int number = 8.22;        //ประกาศตัวแปรชื่อ number ชนิดตัวเลขจำนวนเต็ม
float myPoint = 0;        //ประกาศตัวแปรชื่อ myPoint ชนิดตัวเลขทศนิยม
String myDogName = "Got"; //ประกาศตัวแปรชื่อ myDogName ชนิดข้อความ
bool test = false;        //ประกาศตัวแปรชื่อ test ชนิดตกรรกะ
=======
int number = 32768; //ประกาศตัวแปรชื่อ number ชนิดตัวเลขจำนวนเต็ม

>>>>>>> f6a5fe365725b3d39cd85815e44b589ca97fe876
void setup()
{
    Serial.begin(115200);        //เริ่มติดต่อไมโครคอนโทรเลอร์กับคอมฯ
    Serial.println("Connected"); //ส่งข้อความไปยังคอมพิวเตอร์
}

void loop()
{
    Serial.print("Number is "); //แสดงข้อความออกทางหน้าจอ
<<<<<<< HEAD
    Serial.println(number);     //แสดงค่าที่อยู่ในตัวแปร number

    Serial.println(myPoint); //แสดงค่าที่อยู่ในตัวแปร myPoint
    Serial.print("My Dog Name is : ");
    Serial.println(myDogName); //แสดงค่าที่อยู่ในตัวแปร myDogName

    Serial.println(test);
=======
    Serial.println(number);  //แสดงค่าที่อยู่ในตัวแปร number
>>>>>>> f6a5fe365725b3d39cd85815e44b589ca97fe876
    delay(1000); //หน่วงเวลา หน่วย(mill second)
}