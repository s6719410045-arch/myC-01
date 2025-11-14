// หาผลรวมและค่าเฉลี่ยของเลข 3 จำนวน ที่รับทางแป้นพิมพ์ แล้วแสดงผลออกมา
//input, process (คำนวณ/พิศูจน์ตรวจสอบ/ืำซ้ำ), output, Save
// feture การทำงานมีอะไรแล้ว เพื่อสรุปสร้างเป็น ฟังก์ฃัน

//feature การทำงาน -> รับค่าเลข 3 จำนวน, คำนวณผลรวม, คำนวณหาค่าเฉลี่ย, แสดงผลรวม, แสดงผลค่าเฉลี่ย

#include <stdio.h>

int cakSum(int num1, int num2, int num3){
        return num1 + num2 + num3;
}

double calAverage(int num1, int num2, int num3){
        return (num1 + num2 + num3 )  / 3.0;
}

void showSumAndAverage(int sum, double average) {
        printf("Sum: %d\n" , sum) ;
        printf("Average: %2lf\n" , average)
}

void inputNumber(){
        int num1, num2, num3;
        int sum;
        double average;
        printf("Enter number 1: ")
}

 int main( ){

        return 0;
 }