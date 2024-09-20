#include <stdio.h>

float force(float);

float force(float mass){
    return mass * 9.8;
}

int main(){
printf("\n");

    int mass = 45;
    printf("The value of force is %.2f\n", force(mass));

printf("\n");
return 0;
}