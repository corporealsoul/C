// #include <stdio.h>

// int main()
// {
// printf("\n");
    
//     printf("Size of Char : %d Bytes\n", sizeof(char));
//     printf("Size of Int : %d Bytes\n", sizeof(int));
//     printf("Size of Float : %d Bytes\n", sizeof(float));
//     printf("Size of long : %d Bytes\n", sizeof(long));
//     printf("Size of Double : %d Bytes\n", sizeof(double));
//     printf("Size of long double: %d Bytes\n", sizeof(long double));

// printf("\n\n");
// return 0;
// }






// Let's convert Binary to Decimal

// #include <stdio.h>

// int main()
// {
// printf("\n");
    
//     int decimal_number;
//     int i_loop;

//     // printf("Enter a Decimal : ");
//     // scanf("%d", &decimal_number)

//     for ( i_loop = 0; i_loop < count; i_loop++)
//     {
//         /* code */
//     }
    
// printf("\n\n");
// return 0;
// }





// #include <stdio.h>

// int main() {
// printf("\n");

//     size_t size_of_int = sizeof(int);  // `size_of_int` is of type `size_t`
//     printf("Size of int: %zu bytes\n", size_of_int);

// printf("\n");
// return 0;
// }






// #include <stdio.h>
// #include <limits.h>

// int main() {
// printf("\n");

//     int var1 = INT_MIN;
//     int var2 = INT_MAX;

//     // int var1 = __INT32_MAX__;
//     // int var2 = __INT32_MIN__;

//     printf("Range if signed integer is from : %d to %d", var1, var2);

// printf("\n");
// return 0;
// }






// #include <stdio.h>
// #include <limits.h>

// int main() {
// printf("\n");

//     unsigned int var1 = 0;
//     unsigned int var2 = UINT_MAX;

//     printf("Range if signed integer is from : %u to %u", var1, var2);

// printf("\n");
// return 0;
// }







// #include <stdio.h>
// #include <limits.h>

// int main() {
// printf("\n");

//     short int var1 = SHRT_MIN;
//     short int var2 = SHRT_MAX;

//     printf("Range if signed integer is from : %d to %d", var1, var2);

// printf("\n");
// return 0;
// }





#include <stdio.h>
#include <limits.h>

int main() {
printf("\n");

    unsigned short int var1 = 0;
    unsigned short int var2 = USHRT_MAX;

    printf("Range if signed integer is from : %u to %u", var1, var2);

printf("\n");
return 0;
}