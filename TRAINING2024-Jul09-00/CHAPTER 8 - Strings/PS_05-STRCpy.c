#include<stdio.h>
#include<string.h>

int my_str_len(char[]);
void my_str_copy(char[], char[]);


int my_str_len(char char_array[]){

    int count = 0;
    int length;

    while (char_array[count] != '\0')
    {
        count ++;
    }
    length = count;
return length;
}


void my_str_copy(char target[], char source[]){

    int i;

    for (i = 0; i < my_str_len(source); i++)
    {
        target[i] = source[i];
    }
    target[my_str_len(source)] = '\0';
}


int main(){ 

    char source[] = "Anup Kumar Mondal";
    char target[30];

    my_str_copy(target, source);

    printf("%s to %s", source, target);
return 0;
}