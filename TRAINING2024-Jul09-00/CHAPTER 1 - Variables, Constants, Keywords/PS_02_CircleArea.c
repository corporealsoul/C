#include<stdio.h>

int main(){
    float pi = 3.14159, r, area; 
    
    printf("Enter Radius : ");
    scanf("%f", &r);

    area = pi * (r * r);

    printf("Area : %f", area);

return 0;
}