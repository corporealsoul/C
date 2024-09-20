#include <stdio.h>

int celsius_fahrenheit(int);

int celsius_fahrenheit(int celsius){

    int fahrenheit;
    fahrenheit = (9.0/5.0)*celsius + 32;
    return fahrenheit;
}

int main() {

    int hold_fahrenheit;
    int celsius;

printf("\n");

    hold_fahrenheit = celsius_fahrenheit(celsius = 100);
    printf("Fahrenheit : %d \n", hold_fahrenheit);

printf("\n");
return 0;
}