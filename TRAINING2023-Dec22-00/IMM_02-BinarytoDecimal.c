#include <stdio.h>
#include <math.h>

int main()
{
printf("\n");
    
    int given_number = 101010, Binary = given_number;

    int i_loop;
    int leftover;
    int store = 0;

    // printf("Enter a Number : ");
    // scanf("%d", &given_number)

    for (i_loop = 0; given_number > 0; i_loop++)
    {
        leftover = given_number % 10;
        printf("%d ", leftover);

        store = store + leftover * pow(2, i_loop); 

        given_number = given_number / 10;

    }
    printf(" \n");
    printf("Number of digits : %d ", i_loop);

    printf(" \n");
    printf("Decimal of %d : %d ", Binary, store);
printf("\n\n");
return 0;
}







// #include <stdio.h>
// #include <math.h>

// int main()
// {
// printf("\n");
    
//     int given_number = 101010, Binary = given_number;

//     int i_loop = 0;
//     int leftover;
//     int store = 0;


//     printf("The reverse : ");

//     while (given_number > 0)
//     {
//         leftover = given_number % 10;

//         printf("%d ", leftover);

//         if (leftover != 0 && leftover != 1)
//         {
//             printf("Not a valid Binary !");
//             return 1;
//         }

//         store = store + (leftover * pow(2, i_loop));

//         given_number = given_number / 10;

//         i_loop ++;

//     }
    
//     printf(" \n");
//     printf("Number of digits : %d ", i_loop);

//     printf(" \n");
//     printf("Decimal of %d : %d ", Binary, store);

// printf("\n\n");
// return 0;
// }