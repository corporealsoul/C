# Explain initialization vs. assignment in C, starting from the basics of declaration and covering all possible cases (like arrays, structs, pointers, functions and different ways to set values). Also, include explanations for common confusions.

/*
Declaration: Defines the type and name of variables, pointers, arrays, or structures for recognition by the compiler;
occurs before initialization or assignment; can be declared multiple times (in different scopes) but only once in the same scope.

Initialization: Assigns an initial value to a variable at declaration; occurs at the time of declaration;
can only be initialized once at declaration.

Assignment: Updates the value of an already declared variable; can occur anytime after declaration;
allows multiple value assignments throughout the variable's lifetime.
*/


#include <stdio.h>

int main() {
    printf("\n");

    int n; // Declaration

    printf("\n");
    return 0;
}