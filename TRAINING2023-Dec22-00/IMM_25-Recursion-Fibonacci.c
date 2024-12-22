#include <stdio.h>

// Function declarations
int recur_1stfunc();
int recur_2ndfunc();
int recur_3rdfunc();
int recur_4thfunc();
int recur_5thfunc();

int main() {
    printf("\n");

    int facto = 1;

    facto = recur_5thfunc();
    printf("Factorial of 5 is %d\n", facto);

    printf("\n");
    return 0;
}

// Function definitions
int recur_5thfunc() {
    return 5 * recur_4thfunc(); // 5! = 5 * 4!
}

int recur_4thfunc() {
    return 4 * recur_3rdfunc(); // 4! = 4 * 3!
}

int recur_3rdfunc() {
    return 3 * recur_2ndfunc(); // 3! = 3 * 2! 
}

int recur_2ndfunc() {
    return 2 * recur_1stfunc(); // 2! = 2 * 1
}

int recur_1stfunc() {
    return 1; // Base case, 1! = 1
}
