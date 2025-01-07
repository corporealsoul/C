#include <math.h>
#include <stdio.h>

int main() {
    FILE *pFile;

    pFile = fopen("file.txt", "a");

    // fprintf(pFile, "I'm line : %d !! \n", i);

    for (int i = 1; i <= 10; i++) {
        fprintf(pFile, "I'm line : %d !! \n", i);
    }

    fclose(pFile);
    return 0;
}