#include <stdio.h.>

int main(){
    int x = 10; // สร้างตัวเเปร x เเละกำหนดค่าเป็น 10
    int *ptr; // ประกาศ pointer ที่สามารถเก็บ address ของตัวเเปรชนิด int ได้
    ptr = &x; // ให้ ptr ชี้ไปยัง address ของ x (ตอนนี้ ptr เก็บ address ของ x)
    printf("Before : x = %d\n", x); // เเสดงค่าปัจจุบันของ x(คือ 10)
    *ptr = 20; // *ptr หมายถึงค่าใน address ที่ ptr ชี้อยู่ (คือ x) ดังนั้น *ptr = 20 จะเปลี่ยนค่า x เป็น 20
    printf("After : x = %d\n", x); // เเสดงค่าปัจจุบันของ x(คือ 20)
    return 0;
}

/* ptr = &x; - ให้ pointer ชี้ไปที่ตัวเเปร x
ptr = 20; - เปลี่ยนค่าที่ address ของ x ผ่าน pointer
ทำให้ค่า x เปลี่ยนจาก 10 เป็น 20*/