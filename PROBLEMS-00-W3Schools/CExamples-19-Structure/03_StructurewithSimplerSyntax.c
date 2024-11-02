#include <stdio.h>
#include <string.h>

struct FirstStructure {
    int number;
    char letter;
    char string[50];

};

int main() {
    printf("\n");

    struct FirstStructure first = {10, 'a', "Structure"};
    struct FirstStructure second = {20, 'b'};

    printf("First structure number is: %d\n", first.number);
    printf("First structure letter is: %c\n", first.letter);
    // printf("First structure string is: %s\n", first.string);
    printf("\n");

    printf("First structure number is: %d\n", second.number);
    printf("First structure letter is: %c\n", second.letter);
    printf("\n");

    printf("Size of the Structure : %d", sizeof(struct FirstStructure));

    printf("\n");
    return 0;
}