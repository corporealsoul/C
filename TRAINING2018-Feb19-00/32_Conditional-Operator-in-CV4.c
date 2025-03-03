#include<stdio.h>

int main()
{
printf("\n");
  int var = 75;
  int var2 = 56;
  int num;

  num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;
  printf("\n");
printf("%d", num);
return 0;
}
