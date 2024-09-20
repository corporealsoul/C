#include <stdio.h>

void display();
// int display();


void display(){
// int display(){
    
    printf("I'm Void ! \n");

    return 10;
}


int main() {

printf("\n");

    int hold;

    hold = display();
    printf("I %d, from Function ! \n", hold);

printf("\n");
return 0;
}