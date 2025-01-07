#include <stdio.h>

struct FirstStructure {
    int number;
    char letter;
};

int main() {
    printf("\n");

    int something;
    struct FirstStructure first;

    first.number = 10;
    first.letter = 'A';

    printf("First structure number is: %d\n", first.number);
    printf("First structure letter is: %c\n", first.letter);
    printf("\n");

    printf("Size of the Structure : %d", sizeof(struct FirstStructure));

    printf("\n");
    return 0;
}