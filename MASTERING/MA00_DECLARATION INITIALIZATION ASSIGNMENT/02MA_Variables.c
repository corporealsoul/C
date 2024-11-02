/*
 Can you explain the concepts of declaration, initialization, and assignment of "Variables" in C language? Please include detailed examples for each case possible in C language to help clarify any confusions.
 What are the possible ways to do declaration, initialization, and assignment of a "variable" ? Please include detailed examples for each case possible in C language.
 What are the common confusions, mistakes we do or What are the possible ways not to do declaration, initialization, and assignment of an "variable" ?
*/







// #include <stdio.h>
//
// int main() {
//     int n;
//     printf("\n");
//
//     int a, b; a = b;
//
//     // a = b = 10;
//     printf("%d\n", a);
//
//     printf("\n");
//     return 0;
// }







// #include <stdio.h>
//
// int main() {
//   printf("\n");
//
//     char ch = 'A';
//     char ch_c[] = "A";
//
//     printf("%c ", ch);
//     printf("%s ", ch_c);
//
//   printf("\n");
// return 0;
// }







#include <stdio.h>

int globalVar = 20; // Global variable with default initialization (0)

void exampleFunction()
{
    int localVar = 10;        // Declaration and initialization of a local variable
    static int staticVar = 0; // Static variable, retains value across calls

    printf("Local Var: %d\n", localVar);
    printf("Static Var: %d\n", staticVar);
    printf("Global Var: %d\n", globalVar);

    staticVar++; // Assignment, changing the static variable’s value
}

int main()
{
    int mainVar; // Declaration of a local variable
    mainVar = 5; // Assignment to mainVar
    printf("Main Var: %d\n", mainVar);
    printf("Global Var: %d\n", globalVar);
    printf("\n");

    exampleFunction(); // Call exampleFunction
    printf("\n");

    exampleFunction(); // Call exampleFunction again to show static persistence
    printf("\n");

    exampleFunction();
    printf("\n");

return 0;
}
