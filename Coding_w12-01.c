#include <stdio.h>

int main(){
    int x = 10;
    
    int *ptr;
    
    ptr = &x;       //เขียนคำสั่งให้ prt ชี้ไปที่ x

    printf("Before: x = %d\n", x);      //แสดงค่า x ก่อนเปลี่ยน

    *ptr = 20;          //ใช้ pointer เปลี่ยนค่า x ให้เป็น 20

    printf("After: x = %d ",x);      //แสดงค่า x หลังเปลี่ยน

    return 0;


}