#include <stdio.h>

int main() {
    printf("\n");

    int int_array[] = {10, 20, 30, 40, 50};

    int *int_pointer = int_array; 

    printf("Value at int_pointer (first element): %d\n", *int_pointer);

    printf("Address of the first element (using int_pointer): %p\n", int_pointer);
    printf("Address of the first element (using int_array): %p\n", &int_array[0]);

    printf("Value at int_pointer + 1 (second element): %d\n", *(int_pointer + 1));

    printf("Address of the second element (using int_pointer + 1): %p\n", int_pointer + 1);

    printf("\n");
    return 0;
}
