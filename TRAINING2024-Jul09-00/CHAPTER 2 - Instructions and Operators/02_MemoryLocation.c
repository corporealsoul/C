#include <stdio.h>
#include <math.h>

int main() {

    
    int integer_size = sizeof(int);
    unsigned long long integer_capacity = (unsigned long long)pow(2, integer_size * 8);
    int int_no = (integer_capacity / 2) - 1;

    int float_size = sizeof(float);
    unsigned long long float_capacity = (unsigned long long)pow(2, float_size * 8);
    float flt_no = (float_capacity / 2) - 1;

    int char_size = sizeof(char);
    unsigned long long char_capacity = (unsigned long long)pow(2, char_size * 8);
    char char_ch = 'A';

    printf("\n");
    printf("Integer memory location : %d \n", &int_no);
    printf("Integer memory size : %zu bytes \n", sizeof(int));
    printf("Integer capacity : %llu \n", integer_capacity);
    printf("Integer value at location : %d \n", int_no);

    printf("\n");
    printf("Float memory location : %d \n", &flt_no);
    printf("Float memory size : %zu bytes \n", sizeof(float));
    printf("Float capacity : %llu \n", float_capacity);
    printf("Float value at location : %f \n", flt_no);

    printf("\n");
    printf("Character memory size : %zu bytes \n", sizeof(char));
    printf("Character memory location : %d \n", &char_ch);
    printf("Character capacity : %llu \n", char_capacity);
    printf("Character value at location : %c \n", char_ch);

return 0;
}