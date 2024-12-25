#include <stdio.h>

int main()
{
printf("\n\n");

	// char chA = 'A', chZ = 'Z';
	// char cha = 'a', chz = 'z';

	// int in = 65;

	// printf("%c : %d \n%c : %d \n", chA, chA, chZ, chZ);
	// printf("%c : %d \n%c : %d \n", cha, cha, chz, chz);

	// printf("%c \n", in);

	int loop;

	for (loop = 65; loop <= 90; loop++)
	{
		printf("%c ", loop);
	}
	printf("\n\n");

	for (loop = 97; loop <= 122; loop++)
	{
		printf("%c ", loop);
	}
	
printf("\n\n");
return 0;
}