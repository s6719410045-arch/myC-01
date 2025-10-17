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
    switch (bus_number){
        case 57 : printf("Go to Pinklo, Bangkhunnon\n");
                  break;
        case 3 : printf("GO to Sanam Luang, Ladproao\n");
                 break;
        case 71 : printf("GO to Hau Lamphong, Yaowarat\n");
                  break;
        case 56 : printf("GO to Bang Lamphu, Sapan Krungthon\n");
                  break;
        case 539 : printf("GO to Samsen, Anusawari Chai");
                  break;
        default : printf("Don\'t have data\n");
    }
    showline
   
    return 0;
}