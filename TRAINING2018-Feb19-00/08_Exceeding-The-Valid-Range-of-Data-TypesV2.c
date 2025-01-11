#include <stdio.h>
#include <limits.h>


int main() {
printf("\n");

    size_t size_of_int = sizeof(int);
    printf("Size of int: %zu bytes \n", size_of_int);

    unsigned int range_of_unsigned_int = UINT_MAX;
    printf("Size of unsigned int : %u \n", range_of_unsigned_int);

    // unsigned int range_of_unsigned_int_check = 4294967295;
    unsigned int range_of_unsigned_int_check = 4294967295;
    printf("Size of unsigned int check : %u \n", range_of_unsigned_int_check);

    int range_of_int = INT_MAX;
    printf("Size of unsigned int : %u \n", range_of_int);

    int range_of_int_check = -2147483646;
    printf("Size of unsigned int check : %u \n", range_of_int_check);


printf("\n");
return 0;
}