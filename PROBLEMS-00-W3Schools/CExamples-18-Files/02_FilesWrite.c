#include <math.h>
#include <stdio.h>

int main() {
    FILE *pFile;

    pFile = fopen("file.txt", "w");

    fprintf(pFile, "Hello there !! \n");

    fclose(pFile);
    return 0;
}