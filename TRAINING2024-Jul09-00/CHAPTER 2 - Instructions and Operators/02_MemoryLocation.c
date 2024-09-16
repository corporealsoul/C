#include <stdio.h>

int main() {
    int num = 42;  // Declare and initialize an integer variable

    // Print the value of the variable
    printf("Value of num: %d\n", num);

    // Print the memory address of the variable using the address-of operator (&)
    printf("Memory address of num: %p\n", (void*)&num);

return 0;
}
