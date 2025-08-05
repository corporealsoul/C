#include <stdio.h>

int main()
{
printf("\n\n");

	int number, remainder;
	int loop, count = 0;

	printf("Number : ");
	scanf("%d", &number);

	do
	{
		number = number / 10;
		count ++;
	} while (number > 0);
	
	printf("\n");
	printf("Digits : %d", count);

printf("\n\n");
return 0;
}