#include <stdio.h>

double num1 = 555; //Golbal
double calSquareAreare(double num1, double num2);

double sumNumber(double num1, double num2){ 
        return num1 + num2;
}
int main() {
        double area;
        printf("%.2if\n",num1);
        printf("%.2if\n", sumNumber(10, 20));
        printf("%.2if\n", sumNumber(1000, 2000));
        printf("%.2if\n", calSquareAreare(10, 20));
        area = calSquareAreare(10, 20);
        printf("%.2if\n", area );
        return 0;
}
        double calSquareAreare(double num1, double num2){
                printf("%.2if\n", num1) ;
        return num1 * num2;
}