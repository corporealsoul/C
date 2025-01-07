#include <stdio.h>
#include <string.h>

struct FirstStructure {
    int number;
    char letter;
    char string[50];

};

int main() {
    printf("\n");

    struct FirstStructure first = {13, 'B', "Structure"};
    struct FirstStructure second;

    second = first;

    printf("%d %c %s \n", first.number, first.letter, first.string);

    second.number = 10;
    second.letter = 'A';
    // second.string = "Modified";
    strcpy(second.string, "Modified");

    printf("%d %c %s \n", second.number, second.letter, second.string);

    printf("\n");
    return 0;
}