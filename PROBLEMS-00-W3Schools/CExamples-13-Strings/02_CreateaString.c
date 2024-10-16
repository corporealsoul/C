#include<stdio.h>

int main(){
    char string_greeting_spaced[] = {'H', 'e', 'l', 'l', 'o', ' ', 'C', '!', '\0'};
    char string_greeting_quotes[] = "Hello C!";

    printf("String : %s \n", string_greeting_spaced);
    printf("String : %s \n", string_greeting_quotes);

return 0;
}