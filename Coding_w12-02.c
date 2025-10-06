#include <stdio.h>

void swap(int *a,int *b) {      //เขียนฟังก์ชัน swap ที่รับ int*a,int*b แล้วสลับค่า

    int swap = *a;      // นำค่า a มาเก็บไว้ใน swap
    *a = *b;            // ชี้ที่ *b แล้วนำค่าไปเก็บไว้ใน *a
    *b = swap;          // นำค่าของ swap ไปเก็บไว้ใน *b

}

int main() {

    int a = 5,b=10;
    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a,&b);            // เรียกใช้ฟังก์ชัน swap
    printf("After swap: a = %d, b = %d", a, b);

    return 0;

}
