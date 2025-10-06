#include <stdio.h>

void doubleArray(int *arr, int size) {      //สร้างฟังก์ชัน doubleArray(int *arr, int size) สำหรับคูณสอง ค่าใน array
    for(int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
    }
}

int main() {                
    int a[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Before: ");                     //แสดงค่าก่อนคูณ
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    doubleArray(a, size); // เรียกใช้ฟังก์ชัน doubleArray

    printf("After: ");                      //แสดงค่าหลังคูณ
    for(int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}


