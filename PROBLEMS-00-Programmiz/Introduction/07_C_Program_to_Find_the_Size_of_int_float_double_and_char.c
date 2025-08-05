#include <stdio.h>

int main() {
    int INT_NUMBER;
    float FLOAT_NUMBER;
    double DOUBLE_NUMBER;
    char DOUBLE_CHARACTER;

    printf("\n");

    printf("Size of int: %zu bytes\n", sizeof(INT_NUMBER));
    printf("Size of float: %zu bytes\n", sizeof(FLOAT_NUMBER));
    printf("Size of double: %zu bytes\n", sizeof(DOUBLE_NUMBER));
    printf("Size of char: %zu byte\n", sizeof(DOUBLE_CHARACTER));

    printf("\n\n");
    return 0;
}