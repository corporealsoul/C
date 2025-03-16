#include <stdio.h>
#define GREATER(a, b) if(a > b) \
                        printf("%d is greater than %d\n", a, b); \
                      else \
                        printf("%d is greater than %d\n", b, a);
int main() {
printf("\n");
    GREATER(5, 6);
printf("\n");
return 0;
}