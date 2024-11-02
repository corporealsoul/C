#include <stdio.h>

int main(){
printf("\n\n");

    int N;
    
    printf("How long you want : ");
    scanf("%d", &N);
    printf("\n");

    int arr_var[N];

    int i_scan, i_print, i_sum;
    int size, sum = 0;
 

    size = sizeof(arr_var) / sizeof(arr_var[0]);
    printf("Aray size : %d \n\n", size);

    for (i_scan = 0; i_scan < size; i_scan++)
    {
        arr_var[i_scan] = (i_scan + 15) * 14;
    }
    printf("\n");

    for (i_print = 0; i_print < size; i_print++)
    {
        printf("arr_var[%d] - ADDRESS : %d , VALUE : %d \n",i_print, &arr_var[i_print], arr_var[i_print]);
    }
    printf("\n");

    for (i_sum = 0; i_sum < size; i_sum++)
    {
        sum = sum + arr_var[i_sum];
    }
    printf("Sum of elements : %d\n", sum);

printf("\n\n");
return 0;
}