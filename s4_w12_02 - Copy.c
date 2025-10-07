#include <stdio.h>

/**
 * @brief ฟังก์ชัน swap รับ pointer ของจำนวนเต็มสองตัว(*a เเละ *b)
 * เเละทำการสลับค่าที่ตัวเเปรต้นฉบับชี้อยู่
 * @param a pointer ของจำนวนเต็มตัวเเรก
 * @param b pointer ของจำนวนเต็มตัวที่สอง
 */
void swap(int *a, int *b) {
    int temp = *a; // เก็บค่าปัจจุบันของ a ไว้ใน temp
    *a = *b; // เปลี่ยนค่า a เป็นค่า b
    *b = temp; // เปลี่ยนค่า b เป็นค่าใน temp (คือค่าเดิมของ a)
}
int main(){
    int a = 5, b = 10; // สร้างตัวเเปร a เเละ b เเละกำหนดค่าเริ่มต้น
    printf("Before swap: a = %d, b = %d\n", a, b); // เเสดงค่าปัจจุบันของ a เเละ b
    swap(&a, &b); // เรียกใช้ฟังก์ชัน swap โดยส่ง address ของ a เเละ b
    printf("After swap: a = %d, b = %d\n", a, b); // เเสดงค่าหลังจากสลับค่า
    return 0;
}
/*
ptr = &x; - ให้ pointer ชี้ไปที่ตัวเเปร x
ptr = 20; - เปลี่ยนค่าที่ address ของ x ผ่าน pointer
ทำให้ค่า x เปลี่ยนจาก 10 เป็น 20
*/