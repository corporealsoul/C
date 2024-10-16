#include<stdio.h>
#include<stdlib.h>

int main()
{
printf("\n");

    float array_range;
    float *number_ptr;

    printf("Enter number : ", array_range);
    scanf("%f", &array_range);
    printf("\n");

    number_ptr = (float*) calloc (array_range, sizeof(float));
    number_ptr[0] = 1.3;
    number_ptr[1] = 2.23;
    number_ptr[2] = 3.9060;
    printf("\n");

    printf("Value of location number_ptr[0] : %f \n", number_ptr[0]);
    printf("Value of location number_ptr[1] : %f \n", number_ptr[1]);
    printf("Value of location number_ptr[2] : %f \n", number_ptr[2]);

printf("\n");
return 0;
}