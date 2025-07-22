#include <stdio.h>

const int GLOBAL_RATE = 10;

void calculate() {
    const int LOCAL_BONUS = 50;

    printf("In calculate():\n");
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();

    printf("\nIn main():\n");
    printf("GLOBAL_RATE = %d\n");

    return 0;
}

// ความแตกต่าง
// GLOBAL_RATE - ประกาศนอกฟังก์ชัน - ใช้งานใน main ได้   - มีอายุการใช้งานตลอดโปรแกรม
// LOCAL_BONUS - ประกาศในฟังก์ชัน  - ใช้งานใน main ไม่ได้ - มีอายุแค่จอนฟังก์ชันทำงาน
// เกิดอะไรขึ้นถ้าเราเขียน GLOBAL_RATE = 20; หรือLOCAL_BONUS = 80;
// จะเกิด Compile-Time Error
// ทำไม Local_Bonus ถึงไม่สามารถใช้ใน main() ได้
// เพราะเป็นตัวแปรภายในฟังก์ชั่น
// สรุป local_bonus ใช้เฉพาะในฟังก์ชันเท่านั้น global_rate = ใช้ได้ทั่วทั้งโปรแกรม