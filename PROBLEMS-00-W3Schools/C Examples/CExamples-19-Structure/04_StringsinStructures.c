#include <stdio.h>
#include <string.h>

struct FirstStructure {
    int number;
    char letter;
    // char string[50] = "Anup"; // Can't do this.
    char string[50];

};

int main() {
    printf("\n");

    int something;
    struct FirstStructure first;
    struct FirstStructure second;

    first.number = 10;
    first.letter = 'A';
    // first.string[0] = 'A';
    // first.string[50] = "Hello, World!"; // Can't assign this
    strcpy(first.string, "Structure !!");

    second.number = 20;
    second.letter = 'B';

    printf("First structure number is: %d\n", first.number);
    printf("First structure letter is: %c\n", first.letter);
    printf("First structure string is: %s\n", first.string);
    printf("\n");

    printf("First structure number is: %d\n", second.number);
    printf("First structure letter is: %c\n", second.letter);
    printf("\n");

    printf("Size of the Structure : %d", sizeof(struct FirstStructure));

    printf("\n");
    return 0;
}