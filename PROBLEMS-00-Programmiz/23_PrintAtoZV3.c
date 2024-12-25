#include <stdio.h>

int main()
{
printf("\n\n");

	char loop;
	char cha;

	printf("Enter L to display LOWER case Enter U to UPPER : ");

	scanf("%c", &cha);

	if (cha == 'U' || cha == 'u')
	{
		for (loop = 'A'; loop <= 'Z'; loop++)
		{
			printf("%c ", loop);
		}
	}
	else if (cha == 'L' || cha == 'l')
	{
		for (loop = 'a'; loop <= 'z'; loop++)
		{
			printf("%c ", loop);
		}
	}
	else
	{
		printf("Invalid Input");
	}
	
printf("\n\n");
return 0;
}