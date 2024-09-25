#include <stdio.h>

int main() {

    int integer_variable_one, integer_variable_two;
    int loop_scan, loop_print;
    int array_variable_one[20];

printf("\n");

    for(loop_scan = 1; loop_scan <= 5 ; loop_scan++){

        printf("Enter value for - array_variable_one [%d] : ", loop_scan);
        scanf("%d", &array_variable_one[loop_scan]);
    }

    printf("\n");
    
    for(loop_print = 1; loop_print <= 5 ; loop_print++){

        printf("array_variable_one [%d] :  %d\n", loop_print, array_variable_one[loop_print]);
    }

printf("\n");
return 0;
}