#include<stdio.h>
#include<string.h>

int main()
{
printf("\n");

    // char ch_ar[10] = {"Anup"};
    // char ch_ar[10] = {'A', 'B'};
    // char ch_ar[10] = {'A', 'B', '\0'};
    // char ch_ar[] = {"abschrt"};
    char ch_ar[] = {'A', 'B'};


    printf("%s \n", ch_ar);

    int arr_length = sizeof(ch_ar) / sizeof(ch_ar[0]);
    int strlength = strlen(ch_ar);

    printf("Array length : %d \n", arr_length);
    printf("String length : %d \n", strlength);
    
printf("\n\n");
return 0;
}