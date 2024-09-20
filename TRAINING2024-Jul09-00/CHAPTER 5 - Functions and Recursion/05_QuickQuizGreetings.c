#include <stdio.h>

int good_morning();
int good_afternoon();
int good_night();

int good_morning(){

    printf("Good Morning ! \n");
}

int good_afternoon(){

    printf("Good Afternoon ! \n");
}

int good_night(){

    printf("Good Night ! \n");
}


int main() {

printf("\n");

    good_morning();
    good_afternoon();
    good_night();

printf("\n");
return 0;
}