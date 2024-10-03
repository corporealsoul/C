#include <stdio.h>
#include <string.h>

int main(){

printf("\n");

    char string_array_c[5], string_array_s[5];
    int loop_c_scan, loop_c_print;

    printf("Enter String C (4 Characters) : ");
    for (loop_c_scan = 0; loop_c_scan < 5; loop_c_scan++)
    {
        scanf("%c", &string_array_c[loop_c_scan]);
    }
    for (loop_c_print = 0; loop_c_print < 5; loop_c_print++)
    {
        printf("%c", string_array_c[loop_c_print]);
    }
    printf("\n");

    printf("Enter String (4 Characters) : ");   
    gets(string_array_s);
    printf("%s", string_array_s);
    printf("\n\n");

    int str_compare = strcmp(string_array_c, string_array_s);
    printf("Comapared : %d", str_compare);
    printf("\n");

printf("\n");
return 0;
}
