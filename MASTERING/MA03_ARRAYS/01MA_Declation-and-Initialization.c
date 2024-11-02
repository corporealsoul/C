// #include <stdio.h>

// int main(){
// printf("\n\n");

//     int arr_var[] = {1, 2, 3, 4, 5};

//     printf("%d ", arr_var[1]);
//     printf("%d ", arr_var[3]);
//     printf("%d ", arr_var[2]);
//     printf("%d ", arr_var[1]);
//     printf("%d ", arr_var[0]);

// printf("\n\n");
// return 0;
// }

/*--------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int main(){
// printf("\n\n");

//     int arr_var[5];

//     arr_var[0] = 1;
//     arr_var[1] = 2;
//     arr_var[2] = 3;
//     arr_var[3] = 4;
//     arr_var[4] = 5;

//     printf("%d ", arr_var[4]);
//     printf("%d ", arr_var[3]);
//     printf("%d ", arr_var[2]);
//     printf("%d ", arr_var[1]);
//     printf("%d ", arr_var[0]);

// printf("\n\n");
// return 0;
// }

/*--------------------------------------------------------------------------------------------------------------*/

// #include <stdio.h>

// int main(){
// printf("\n\n");

//     int arr_var[5];

//     int i_scan, i_print;
//     int size;

//     size = sizeof(arr_var) / sizeof(arr_var[0]);
//     printf("Aray size : %d \n\n", size);

//     for (i_scan = 0; i_scan < size; i_scan++)
//     {
//         scanf("%d", &arr_var[i_scan]);
//     }
//     printf("\n\n");

//     for (i_print = 0; i_print < size; i_print++)
//     {
//         printf("Array elemenet arr_var[%d] : %d and Value in it : %d \n",i_print, &arr_var[i_print], arr_var[i_print]);
//     }

// printf("\n\n");
// return 0;
// }

/*--------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

int main(){
printf("\n\n");

    int arr_var[5];

    int i_scan, i_print;
    int size;

    size = sizeof(arr_var) / sizeof(arr_var[0]);
    printf("Aray size : %d \n\n", size);

    for (i_scan = 0; i_scan < size; i_scan++)
    {
        arr_var[i_scan] = (i_scan + 15) * 14;
    }
    printf("\n\n");

    for (i_print = 0; i_print < size; i_print++)
    {
        printf("Array elemenet arr_var[%d] : %d and Value in it : %d \n",i_print, &arr_var[i_print], arr_var[i_print]);
    }

printf("\n\n");
return 0;
}