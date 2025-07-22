#include <stdio.h>

int main() {
    int int_score = 90.5;
    float float_score = 90.5;

    printf("กรณีที่ 1 (int): score = %d\n" , int_score);
    printf("กรณีที่ 2 (float): score = %.1f\n", float_score);

    return 0;
}

// int ใช้สำหรับเลขเต็มจำนวน
// float ใช้สำหรับเลขทศนิยม
// สรุป หากต้องการผลลัพธ์ ที่เป็นเลขจำนวนเต็มควรใช้ int ในการเขียน หากต้องการผลลัพธ์ ที่เป็นทศนิยม ควรใช้ float เขียน