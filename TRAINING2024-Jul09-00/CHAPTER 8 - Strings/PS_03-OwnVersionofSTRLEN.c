#include <stdio.h>
#include <string.h>

int my_strlen(char *string) {
    int length = 0;

    while (string[length] != '\0') {
        length++;
    }

return length;
}

int main() {
    char string[100];
printf("\n");

    printf("Enter String: ");
    fgets(string, sizeof(string), stdin);

    int length = my_strlen(string);

    printf("STRLEN: %d\n", length);

printf("\n");
return 0;
}






// #include <stdio.h>
// #include <string.h>

// int my_strlen(char string[]) {
//     int i = 0, count;
//     char c = string[i];
//     while (c != '\0')
//     {
//         c = string[i];
//         i ++;
//     }
//     count = i;
// return count;
// }

// int main() {
//     char string[] = "Anup";
// printf("\n");

//     printf("%d", my_strlen(string));
// printf("\n");
// return 0;
// }







// #include<stdio.h>
// #include<string.h>

// int str_len(char char_array[]){

//     int count = 0;
//     int length;

//     while (char_array[count] != '\0')
//     {
//         count ++;
//     }
//     length = count;
// return length;
// }

// int main(){
//     char char_array[] = "Anup Kumar Mondal";
//     int hold;

//     hold = str_len(char_array);
//     printf("%d", hold);
}