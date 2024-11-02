#include <math.h>
#include <stdio.h>

int main() {
    FILE *pFile;

    pFile = fopen("file.txt", "w");

    fclose(pFile);
    return 0;
}