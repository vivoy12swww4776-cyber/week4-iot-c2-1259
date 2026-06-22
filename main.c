#include <stdio.h>

void app_main(void) {
    int a = 100;        // ตัวแปรเก็บค่า 100
    int *ptr1 = &a;     // ptr1 เก็บที่อยู่ของ a
    int **ptr2 = &ptr1; // ptr2 เก็บที่อยู่ของ ptr1

    // แสดงผลค่าตัวแปร
    printf("--- Pointer Learning ---\n");
    printf("Value of a: %d\n", a);
    
    // แสดงผล Address (ใช้ %p สำหรับ pointer)
    printf("Address of a: %p\n", (void *)&a);
    printf("Value of ptr1 (Address of a): %p\n", (void *)ptr1);
    
    // แสดงผลการเข้าถึงผ่าน Double Pointer
    printf("Value of a via *ptr1: %d\n", *ptr1);
    printf("Value of a via **ptr2: %d\n", **ptr2);
    
    printf("------------------------\n");
}

int main() {
    app_main();
    return 0;
}
