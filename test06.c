//Global-Local Variable
#include <stdio.h> //หรือ "stdio.h"
 
int dataA = 100; //Global variable ใช้ที่ไหนก็ได้
const int dataE = 5050; //Constant(ค่าคงที่) Global Variable
 
void showData(){
    int dataB = 555; //local variable ใช้ในเฉพาะใน code block นั้นๆ เท่านั้น
 
    printf("dataA = %d\n", dataA);
    printf("datab = %d\n", dataB);
    printf("dataE = %d\n", dataE);
    // printf("dataD = %d\n", dataD); Error
    // printf("dataC = %d\n", dataC); Error
}
 
 
 
int main(){
    int dataC = 999;  //local variable ใช้ในเฉพาะใน code block นั้นๆ เท่านั้น
    const int dataD = 1010; //Constant(ค่าคงที่)  Variable
    // dataD = 2020; Error
 
    dataC = 888;
 
    printf("dataA = %d\n", dataA);
    dataC = 777;
    printf("dataC = %d\n", dataC);
    // printf("dataB = %d\n", dataB); Error
    printf("dataE = %d\n", dataE);
 
    return 0;
}