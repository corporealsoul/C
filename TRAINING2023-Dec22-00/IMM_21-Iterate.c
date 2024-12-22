#include<stdio.h>
#include<string.h>

int main()
{
printf("\n");

    char ch_ar[] = {"abschrt"};

    printf("%s \n", ch_ar);

    int arr_length = sizeof(ch_ar) / sizeof(ch_ar[0]);
    int strlength = strlen(ch_ar);

    printf("String length : %d \n", strlength);
    printf("Array length : %d \n", arr_length);

    for (int i = 0; i <= arr_length; i++)
    {
        printf("%c ", ch_ar[i]);
    }
    
    for (int j = 0; ch_ar[j] != '\0'; j++)
    {
        printf("%c ", ch_ar[j]);
    }


printf("\n\n");
return 0;
}