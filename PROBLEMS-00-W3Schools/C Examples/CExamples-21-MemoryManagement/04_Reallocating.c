#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\n");

    int *pointer_var_one, *pointer_var_two;
    int size;

    size = 4 * sizeof(*pointer_var_one);

    pointer_var_one = malloc(size);
    printf("%d bytes, allocated at address : %p \n", size, pointer_var_one);

    size = 6 * sizeof(*pointer_var_one);
    pointer_var_two = realloc(pointer_var_one, size);
    printf("%d bytes, allocated at address : %p \n", size, pointer_var_two);

    printf("\n");
    return 0;
}
