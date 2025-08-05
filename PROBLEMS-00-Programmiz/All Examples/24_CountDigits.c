#include <stdio.h>

int main()
{
printf("\n\n");

	int number, remainder;
	int loop;

	printf("Number : ");
	scanf("%d", &number);

	for ( loop = 0; number > 0; loop++)
	{

		remainder = number % 10;
		number = number / 10;
		printf("%d ", remainder);
	}
	printf("\n");
	printf("Digits : %d", loop);

printf("\n\n");
return 0;
}