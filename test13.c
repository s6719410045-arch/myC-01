#include <stdio.h>
#define pa printf("--------------------------\n");
 
int main(){
    int number;
 
    pa
    printf("    Even & Odd Number\n");
    pa
    while(1){ //วนแบบ infinite loop
        printf("Enter number : ");
        scanf("%d", &number);
        if(number <= 0){
            pa
            break;
        }
        if(number % 2 ==0){
            printf("number is even number\n");
        }else{
            printf("number is odd number\n");
        }
        pa
 
    }
    return 0;
}
 