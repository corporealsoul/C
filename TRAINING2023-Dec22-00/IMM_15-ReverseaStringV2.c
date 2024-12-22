#include<stdio.h>
#include<string.h>

int main(){
printf("\n");

    char ch_arr[20];
    int arr_length;
    int strlength;

    printf("Enter string : ");
    gets(ch_arr);
    printf("%s ", ch_arr);

    arr_length = sizeof(ch_arr) / sizeof(ch_arr[0]);
    strlength = strlen(ch_arr);

    printf("Array length : %d \n", arr_length);
    printf("String length : %d \n", strlength);

    for (int i = 0; i < strlength / 2; i++)
    {
        int temp = ch_arr[i];
        ch_arr[i] = ch_arr[strlength - 1 - i];
        ch_arr[strlength - 1 - i] = temp;
    }
    printf("%s ", ch_arr);
    
printf("\n");
return 0;
}