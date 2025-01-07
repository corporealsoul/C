#include<stdio.h>

float toCelsius(float fahrenheit) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}

int main()
{
printf("\n\n");
    // Set a fahrenheit value
    float f_value = 98.8;

    // Call the function with the fahrenheit value
    float result = toCelsius(f_value);

    // Print the fahrenheit value
    printf("Fahrenheit: %.2f\n", f_value);

    // Print the result
    printf("Convert Fahrenheit to Celsius: %.2f\n", result);

    return 0;
printf("\n\n");
return 0;
}