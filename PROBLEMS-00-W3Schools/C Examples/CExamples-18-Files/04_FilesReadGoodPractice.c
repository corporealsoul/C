#include <stdio.h>

int main() {
    FILE *pFile;

    pFile = fopen("file.txt", "r");

    char strings[100];

    if(pFile != NULL) {
        while (fgets(strings, 100, pFile)) {
            printf("%s", strings);
        }
    }
        else {
            printf("No data available");
        }

    fclose(pFile);
    return 0;
}