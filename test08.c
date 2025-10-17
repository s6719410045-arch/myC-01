#include <stdio.h> //printf() , scanf()
 
#define showline printf("--------------------------------\n");
 
int main(){
 
    int bus_number; //int (%d) long (%ld)
 
    showline
    printf(" Bus number information\n");
    showline
    printf("Enter bus number:");
    scanf("%d", &bus_number);
    showline
    if(bus_number == 57){
        printf("Go to Pinklo, Bangkhunnon\n");
    }else if(bus_number == 3){
        printf("GO to Sanam Luang, Ladproao\n");
    }else if(bus_number == 71){
        printf("GO to Hau Lamphong, Yaowarat\n");
    }else if(bus_number == 56){
        printf("GO to Bang Lamphu, Sapan Krungthon\n");
    }else if(bus_number == 539){
        printf("GO to Samsen, Anusawari Chai");
    }else{
        printf("Don\'t have data\n");
    }
    showline
 
    return 0;
}