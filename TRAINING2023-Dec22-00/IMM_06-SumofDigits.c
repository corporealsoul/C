#include <stdio.h>

int main()
{
printf("\n");
    
    int given_number = 5678;
    int i_loop;
    int last_digits;
    int addsup = 0;

    for (i_loop = 0; given_number > 0; i_loop++)
    {
        last_digits = given_number % 10;

        addsup = addsup + last_digits;
 
        given_number = given_number / 10;
    }

    printf("%d ", addsup);
        
printf("\n\n");
return 0;
}
