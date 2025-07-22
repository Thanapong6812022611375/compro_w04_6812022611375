#include <stdio.h>

void countCall() {
    int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    countCall();
    printf("After first call:\n");
    countCall();
    return 0;
}

// ผลลัพแตกต่างเพราะ 
// int counter ถูกสร้างใหม่ ค่าของ counter จะรีเซ็ตเป็น 0 ทุกครั้ง เมื่อเรียกจึงซ้ำจึงเพิ่มเป็น 1 เหมือนเดิม
// static int counter ถูกสร้างขึ้นครั้งเดียวและอยู่หน่วยความจำตลอดอายุโปรแกรม ค่าของ counter จะไม่หายเมื่อจบการทำงาน เมื่อเรียกซ้ำ จึงแสดงเป็น 2
// เปรียบเทียบ
// non static ใช้แค่ตอนฟังก์ชันทำงาน - จำค่าระหว่างเรียกซ้ำไม่ได้ - ค่าเริ่มต้นต้องกำหนดเอง (ไม่กำหนด = ค่าขยะ)
// static ใช้งาตลอดอายุโปรแกรม     - จำค่าระหว่างเรียกซ้ำได้   - ค่าเริ่มต้นไม่ต้องหนดเอง = 0
// สรุป non static variable มีอายุแค่ตอนที่ฟังก์ชันทำงานเท่านั้น ส่วน static อยู่ตลอดอายุโปรแกรม