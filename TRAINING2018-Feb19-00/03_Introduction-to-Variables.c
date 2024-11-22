/*

What are the all possible ways we Declare, Initialize, Assign and Define variables in C language ?

*/



// #include <stdio.h>

// int main()
// {
// printf("\n");

//     int no = 3;
//     int no2 = no;

//     printf("Integer : %d ", no);

//     no = 4;
//     printf("Integer : %d ", no);

// printf("\n\n");
// return 0;
// }






// #include <stdio.h>
// int main()
// {

//     printf("\n\n");

//     int arr[5] = {1, 2, 3, 4, 5};
//     printf("Array elements: ");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("\n\n");
//     return 0;
// }



  
// #include<stdio.h>

// int main()
// {
//     printf("\n");
//         printf("C Language! \n");

//         int var = 3;
//         var = 4;
//         printf("%d", var);

//     printf("\n");
// return 0;
// }

  





#include<stdio.h>

int main()
{
    printf("\n");
        printf("C Language! \n");

        int var, var2, var3;
        var = var2 = var3 = 3;
        printf("%d", var);
        printf("%d", var3);
        printf("%d", var2);

    printf("\n");
return 0;
}