#include <stdio.h>

int main (){

        int dateA;
        int *p_dataA = &dateA;

        dateA = 10;

        // แสดง Address number ของ dataA
        printf("Address of A is : %p\n", &dateA);
        printf("Address of A is : %d\n", &dateA);
        printf("%p\n", p_dataA);
        printf("%d\n", p_dataA);

        //แสดงค่าที่อยู่ในช่อง dataA
        printf("value A %d\n", dateA);
        printf("value A %d\n", *p_dataA);

        printf("Address of p_dataA is : %p\n", &p_dataA);
        *p_dataA = 999;
        printf("value A %d\n", dateA);
        printf("value A %d\n", *p_dataA);

        return 0;
}