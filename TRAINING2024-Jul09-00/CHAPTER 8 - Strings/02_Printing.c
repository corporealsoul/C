#include <stdio.h>

int main() {

    // char array_variable_one[] = {'A', 'B', 'C', '\0'};
    char array_variable_one[] = "ABC";
    int i_print;

printf("\n");

    for (size_t i_print = 0; i_print < 4; i_print++)
    {
        printf("%c", array_variable_one[i_print]);
    }

printf("\n");
return 0;
}