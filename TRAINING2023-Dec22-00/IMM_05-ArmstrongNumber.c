// #include <stdio.h>

// int main()
// {
// printf("\n");
    
//     int given_number = 153; //407, 370, 153
//     int store_given_number = given_number;
//     int i_loop;
//     int last_digits;
//     int is_armstrong = 0;

//     for (i_loop = 0; given_number > 0; i_loop++)
//     {
//         last_digits = given_number % 10;

//         is_armstrong = is_armstrong + (last_digits * last_digits * last_digits);
 
//         given_number = given_number / 10;
//     }
//     printf("\n");

//     if(is_armstrong == store_given_number)
//     {
//         printf("%d : Armstrong", store_given_number);
//     }
//     else
//     {
//         printf("%d : Not Armstrong", store_given_number);
//     }
        
// printf("\n\n");
// return 0;
// }










#include <stdio.h>

int main()
{
printf("\n");
    
    int i_loop, j_loop;
    int last_digits;
    int is_armstrong = 0;
    int original_number;


    for (j_loop = 1; j_loop < 1000; j_loop++)
    {
        is_armstrong = 0;
        original_number = j_loop;

        for (i_loop = 0; original_number > 0; i_loop++)
        {
            last_digits = original_number % 10;
            is_armstrong = is_armstrong + (last_digits * last_digits * last_digits);

            original_number = original_number / 10;
        }
        if(j_loop == is_armstrong)
        {
            printf("%d : Armstrong \n", j_loop);
        }
    }
       
printf("\n\n");
return 0;
}