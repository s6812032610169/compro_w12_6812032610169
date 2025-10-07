#include <stdio.h>

//ฟังก์ชัน doubleArray รับ pointer ของ array เเละขนาดของ array
void doubleArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2; // เพิ่มค่าที่ index i ของ array เป็นสองเท่า
    }
}
int main(){
    int a[] = {1, 2, 3, 4, 5}; // สร้าง array เเละกำหนดค่าเริ่มต้น
    int size = 5; // เก็บขนาดของ array
    printf("Before: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]); // เเสดงค่าปัจจุบันของ array
    }
    printf("\n");
    doubleArray(a, size); // เรียกใช้ฟังก์ชัน doubleArray โดยส่ง address ของ array เเละขนาดของ array
    printf("After: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]); // เเสดงค่าหลังจากเพิ่มค่าเป็นสองเท่า
    }
    printf("\n");

    return 0;
}