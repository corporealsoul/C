/*
 Can you explain the concepts of declaration, initialization, and assignment of "loops" in C language? Please include detailed examples for each case possible in C language to help clarify any confusions.
 What are the possible ways to do declaration, initialization, and assignment of a "loops" ? Please include detailed examples for each case possible in C language.
 What are the common confusions, mistakes we do or What are the possible ways not to do declaration, initialization, and assignment of an "loops" ?
*/




// #include <stdio.h>

// int main() {
//     // Declaration of the loop control variable
//     int i; // Here, 'i' is declared as an integer

//     // Using 'i' in a for loop
//     for (i = 0; i < 5; i++) {
//         printf("%d\n", i); // Prints values from 0 to 4
//     }

//     return 0;
// }




#include <stdio.h>

int main() {
    int i; // Declaration
    for (i = 0; i < 5; i++) { // Initialization of 'i' to 0
        printf("%d\n", i); // Prints values from 0 to 4
    }

    return 0;
}