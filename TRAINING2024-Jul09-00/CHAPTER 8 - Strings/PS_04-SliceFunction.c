#include<stdio.h>
#include<string.h>

char *slice(char char_array[], int m, int n){

    int count = 0;
    int length;
    
    char *ptr1 = &char_array[m];
    char *ptr2 = &char_array[n];

    char_array = ptr1;
    char_array[n] = '\0';

return char_array;
}

int main(){
    char char_array[] = "Anup Kumar Mondal";

    printf("%s", slice(char_array, 1, 5));

return 0;
}