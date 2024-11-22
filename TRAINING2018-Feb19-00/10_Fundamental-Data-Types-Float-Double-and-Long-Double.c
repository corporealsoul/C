// #include <stdio.h>

// int main() {
// printf("\n");

//     size_t size_of_int = sizeof(int);  // `size_of_int` is of type `size_t`
//     printf("Size of int: %zu bytes\n", size_of_int);

// printf("\n");
// return 0;
// }







// #include <stdio.h>

// int main() {
// printf("\n");

//     float var1 = 3.1415926535897932;
//     double var2 = 3.1415926535897932;
//     long double var3 = 3.141592653589793213456;

//     printf("%d \n", sizeof(float));
//     printf("%d \n", sizeof(double));
//     printf("%d \n", sizeof(long double));

//     printf("\n");

//     printf("%.16f \n", var1);
//     printf("%.16f \n", var2);
//     printf("%.21Lf \n", var3);

// printf("\n");
// return 0;
// }






#include <stdio.h>

int main() {
printf("\n");

    int var1 = 4 / 9;
    printf("%d \n", var1);

    float var2 = 4 / 9;
    printf("%.2f \n", var2);

    float var3 = 4.0 / 9.0;
    printf("%.2f \n", var3);

printf("\n");
return 0;
}