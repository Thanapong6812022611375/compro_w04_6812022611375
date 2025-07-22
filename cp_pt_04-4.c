#include <stdio.h>

int main() {
    int num = 25;
    float pi = 3.14159;
    char ch = 'A';
    char str[] = "Hello";

    printf("Character: %c\n", ch);
    printf("String: %s\n", str);
    printf("Decimal: %d\n", num);
    printf("Float: %f\n", pi);
    printf("Hex: %x\n", num);
    printf("Pointer address: %p\n", &num);

    printf("Literal int: %d\n", 100);
    printf("Literal float: %.2f\n", 2.71828);
    printf("Literal hex: %x\n", 255);

    return 0;

    printf("Quoted String: \"Hello\"\n");

    return 0;
}
