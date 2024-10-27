#include <stdio.h>

int main()
{
printf("\n");
    
    int given_number = 565;
    int save_given_number = given_number;
    int i_loop;
    int last_digits;
    int store_reverse = 0;

    for (i_loop = 0; save_given_number > 0; i_loop++)
    {
        last_digits = save_given_number % 10;
        store_reverse = (store_reverse * 10) + last_digits;

        save_given_number = save_given_number / 10;
    }

    if (given_number == store_reverse)
    {
        printf("%d : is a Palindrome", given_number);
    }
    else
    {
        printf("%d : is not a Palindrome", given_number);
    }
    
    
printf("\n\n");
return 0;
}