#include<stdio.h>

int main(){
char namePanida = 'K';                                 //ใช้ chra เพื่อเก็บอักษรตัวแรกของของชื่อ เพราะเป็นตัวอักษรตัวเดียว //กำหนดให้เก็บอักษรตัวแรกของชื่อ
int age =20;                                           //ใช้ int เพื่อเก็บอายุ เพราะเก็บค่าตัวแปรเป็น เลขจำนวนเต็ม //กำหนดให้เก็บอายุ
float weight = 48.50;                                   //ใช้ float เพื่อเก็บน้ำหนัก เพราะสามารถเก็บค่าตัวแปรเป็นทศนิยมได้ //กำหนดให้เก็บน้ำหนัก
char gender[] = "female";                              //ใช้ chra array เพื่อเก็บเพศ เพราะใช้เก็บค่าตัวแปรเป็นชนิด pointer //กำหนกให้เก็บเพศ

printf ("namePanida: %c\n", namePanida );              // Print the initial of the name
printf ("age: %d\n", age );                            // Print the age
printf ("weight: %.1f kg\n", weight );                 // Print the weight with one decimal place 
printf ("gender: %s\n", gender );                      // Print gender
return 0 ;
}
