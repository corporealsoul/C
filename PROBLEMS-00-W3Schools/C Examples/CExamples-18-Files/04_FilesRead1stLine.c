#include <math.h>
#include <stdio.h>

int main() {
    FILE *pFile;

    pFile = fopen("file.txt", "r");

    char strings[100];
    fgets(strings, 100, pFile);
    printf("%s", strings);

    fclose(pFile);
    return 0;
}