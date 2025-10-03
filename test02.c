//preprocess directive
#include <stdio.h>
#include <math.h>
#define ShowSenPa printf("------------------------\n");
#define SMILE "^_^"

//global declaration
int number = 555;
void showHi();

void showHey(){ //user-defined function
        printf("Hey\n");
}

int main(){ //main function
        ShowSenPa
        printf("Weclcome to SAU/n%s/n", SMILE );
        ShowSenPa
        showHey();
        showHi();
        ShowSenPa

        return 0;
}

void showHi(){ //user-defined function
        printf("Hi\n");
}