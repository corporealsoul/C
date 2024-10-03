// #include <stdio.h>

// char *greet();


// char *greet(){
//     return "Hello C !";
// }


// int main(){

//     char *greetings = greet();

//     printf("%s", greetings);

// printf("\n\n");
// return 0;
// }







#include <stdio.h>

char greet();


char greet(){
    // return "Hello C !";
    return 4;
}


int main(){

printf("\n\n");

    char greetings = greet();

    printf("%d", greetings);

printf("\n\n");
return 0;
}