#include <stdio.h>

int main()
{
printf("\n\n");

	int number, remainder;
	int loop, count = 0;

	printf("Number : ");
	scanf("%d", &number);

	while (number > 0)
	{
		remainder = number % 10;
		printf("%d ", remainder);

		number = number / 10;
		count ++;
	}
	
	printf("\n");
	printf("Digits : %d", count);

printf("\n\n");
return 0;
}