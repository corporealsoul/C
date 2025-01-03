#include <stdio.h>

int main() {
    int a = 10, b = 20, c;

    // GCC inline assembly using __asm__
    __asm__ (
        "mov %[result], %[val_a] \n\t"  // Load 'a' into result (equivalent to AX)
        "add %[result], %[val_b]"       // Add 'b' to result
        : [result] "=r" (c)             // Output operand: 'c' gets the result
        : [val_a] "r" (a), [val_b] "r" (b) // Input operands: 'a' and 'b'
    );

    printf("c = %d\n", c);
    return 0;
}
