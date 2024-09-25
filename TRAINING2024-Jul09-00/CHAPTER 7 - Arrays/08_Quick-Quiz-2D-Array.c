#include <stdio.h>

int main() {

    int array_variable_one[2][2];
    int outer_array_loop, inner_array_loop;

printf("\n");

    for (size_t outer_array_loop = 0; outer_array_loop < 2; outer_array_loop++)
    {
        for (size_t inner_array_loop = 0; inner_array_loop < 2; inner_array_loop++)
        {
            printf("Enter VALUE for - array_variable_one [%d][%d] : ", outer_array_loop, inner_array_loop);
            scanf("%d", &array_variable_one[outer_array_loop][inner_array_loop]);
        }
    }

    printf("\n\n");

    // for (size_t outer_array_loop = 0; outer_array_loop < 2; outer_array_loop++)
    // {
    //     for (size_t inner_array_loop = 0; inner_array_loop < 2; inner_array_loop++)
    //     {
    //         printf("VALUE of - array_variable_one [%d][%d] : %d\n", outer_array_loop, inner_array_loop, array_variable_one[outer_array_loop][inner_array_loop]);
    //     }
    // }
    
    for (size_t outer_array_loop = 0; outer_array_loop < 2; outer_array_loop++)
    {
        for (size_t inner_array_loop = 0; inner_array_loop < 2; inner_array_loop++)
        {
            printf("%d ", array_variable_one[outer_array_loop][inner_array_loop]);
        }
        printf("\n");
    }

printf("\n");
return 0;
}