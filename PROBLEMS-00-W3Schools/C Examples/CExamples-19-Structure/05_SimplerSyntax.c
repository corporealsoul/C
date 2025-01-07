#include <stdio.h>

struct FirstStructure {
    int number;
    char letter;
    char string[50];

};

int main() {
    printf("\n");

    struct FirstStructure first = {13, 'B', "Structure"};

    printf("%d %c %s", first.number, first.letter, first.string);

    printf("\n");
    return 0;
}