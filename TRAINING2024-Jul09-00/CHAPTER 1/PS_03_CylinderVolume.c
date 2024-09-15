#include<stdio.h>

int main(){
    float pi = 3.14159, radius, height, volume; 
    
    printf("Enter Radius : ");
    scanf("%f", &radius);

    printf("Enter Height : ");
    scanf("%f", &height);

    volume = pi * (radius * radius) * height;

    printf("Volume : %f", volume);

return 0;
}