// PS D:\GITRepos\C\TRAINING2018-Feb19-00>  gcc main.c variables.c -o main


//#include <stdio.h>
//
//extern int globalInt;
//extern float globalFloat;
//extern char globalChar;
//
//int main() {
//
//    printf("globalInt: %d\n", globalInt);
//    printf("globalFloat: %.2f\n", globalFloat);
//    printf("globalChar: %c\n", globalChar);
//
//    return 0;
//}





//#include <stdio.h>
//
//extern int globalInt;
//extern int globalInt;
//extern int globalInt;
//
//int main() {
//
//    printf("globalInt: %d\n", globalInt);
//
//    return 0;
//}





//#include <stdio.h>
//
//int globalInt = 10;
//
//int main() {
//
//    extern int globalInt;
//
//    printf("globalInt: %d\n", globalInt);
//
//    return 0;
//}





//#include <stdio.h>
//
//extern int globalInt = 10;
//
//int main() {
//
//    printf("globalInt: %d\n", globalInt);
//
//    return 0;
//}





// Variable Modifiers − Static

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//
//    int value;
//
//    value = increment();
//    value = increment();
//    value = increment();
//
//    printf("%d", value);
//return 0;
//}




#include <stdio.h>
#include <stdlib.h>

extern int count;

int main() {

    int value;

    value = increment();
    value = increment();
    value = increment();

    count = count + 3;
    value = count;

    printf("%d", value);
return 0;
}




