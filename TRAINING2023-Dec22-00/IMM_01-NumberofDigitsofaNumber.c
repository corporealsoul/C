#include <stdio.h>

int main()
{
printf("\n");
    
    int given_number = 234504;
    int i_loop;
    int leftover;
    

    // printf("Enter a Number : ");
    // scanf("%d", &given_number)

    for (i_loop = 0; given_number > 0; i_loop++)
    {
        leftover = given_number % 10;
        printf("%d ", leftover);

        given_number = given_number / 10;
    }
    printf(" \n");
    printf("Number of digits : %d ", i_loop);
    
printf("\n\n");
return 0;
}
