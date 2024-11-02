 // #include <stdio.h>
 // #include <stdlib.h>
 //
 // int main() {
 //     printf("\n");
 //
 //     int *pointer_var;
 //     int numStudents = 12;
 //
 //     pointer_var = (int *) malloc (numStudents * sizeof(int));
 //
 //     *pointer_var = 3;
 //
 //     pointer_var[0] = 2;
 //     pointer_var[1] = 3;
 //     pointer_var[2] = 4;
 //
 //     printf("%d\n", pointer_var[0]);
 //     printf("%d\n", pointer_var[1]);
 //     printf("%d\n", pointer_var[2]);
 //
 //     printf("\n");
 //     return 0;
 // }


#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\n");

    int *pointer_var_one, *pointer_var_two;
    int size;

    size = 4 * sizeof(*pointer_var_one);

    printf("%d bytes allocated at address %p \n", size, pointer_var_one);

    size = 6 * sizeof(*pointer_var_one);
    pointer_var_two = realloc(pointer_var_one, size);

    printf("%d bytes allocated at address %p \n", size, pointer_var_two);

    printf("\n");
    return 0;
}