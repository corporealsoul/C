#include <stdio.h>

int main() {

    int integer_variable_one, integer_variable_two;
    int loop_scan, loop_print;
    int array_variable_one[] = {12, 43, 89};

printf("\n");

    printf("\n");
    
    for(loop_print = 0; loop_print < 3 ; loop_print++){

        printf("array_variable_one [%d] :  %d\n", loop_print, array_variable_one[loop_print]);
    }

printf("\n");
return 0;
}