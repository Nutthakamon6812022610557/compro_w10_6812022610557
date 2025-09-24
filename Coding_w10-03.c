#include <stdio.h>                  // เรียกใช้ไลบรารีมาตรฐานสำหรับ Input/Output (เช่น printf, scanf, fgets)
#include <string.h>                // เรียกใช้ไลบรารีสำหรับฟังก์ชันเกี่ยวกับสตริง (เช่น strcmp, strlen, strcspn)

int main() {
    char name1[30], name2[30];        // ประกาศตัวแปรอาร์เรย์ของตัวอักษร 2 ตัว เพื่อเก็บชื่อลูกค้าแต่ละคน โดยมีขนาด 30 ตัวอักษร
    int lenght1 = strlen(name1);                // สร้างตัวแปร นับตัวอักษรของ name1
    int lenght2 = strlen(name2);                // สร้างตัวแปร นับตัวอักษรของ name2
    printf("Enter name of customer 1: ");              // แสดงข้อความให้ป้อนชื่อลูกค้าคนที่ 1
    scanf("%s",&name1) ;                               // รับชื่อ เก็บลงใน name1

    printf("Enter name of customer 2: ");              // แสดงข้อความให้ป้อนชื่อลูกค้าคนที่ 2
    scanf("%s",&name2);                                // รับชื่อ เก็บลงใน name2

    if(scanf( lenght1 == lenght2)) {                    // เปรียบเทียบสตริง name1 และ name2 ถ้าเหมือนกันจะส่งค่า 0
        printf("Both of your names are the same, which is %s.\n", name1); // แสดงผลเมื่อชื่อเหมือนกัน
        printf("The length of the name is %d characters.\n", strlen(name1)); // แสดงความยาวของสตริงด้วย strlen
    } else {                                                                 // ถ้าชื่อไม่เหมือนกัน
        printf("Customer 1: %s (%d characters)\n", name1, strlen(name1)); // แสดงชื่อและจำนวนตัวอักษรของลูกค้าคนที่ 1
        printf("Customer 2: %s (%d characters)\n", name2, strlen(name2)); // แสดงชื่อและจำนวนตัวอักษรของลูกค้าคนที่ 2
    }
    return 0;    
}
