#include<stdio.h>

int main(){

    float fahrenheit, celsius; 

    printf("Fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = (5.0/9.0) * (fahrenheit - 32);

    printf("Celsius : %f", celsius);

return 0;
}