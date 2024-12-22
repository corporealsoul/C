#include <stdio.h>
#include <string.h>

int main()
{
printf("\n");

    char string_arr[20];
    int i;

    printf("Enter a string : ");
    gets(string_arr);

    int string_len = strlen(string_arr);

    printf("%s : %d \n", string_arr, string_len);

    for (i = 0; i < string_len / 2; i++)
    {
        if (string_arr[i] != string_arr[string_len - i - 1])
        {
            printf("Not palindrome !");
            break;
        }
    }
    if (i == (string_len / 2))
    {
        printf("Palindrome !");
    }
    
printf("\n\n");
return 0;
}