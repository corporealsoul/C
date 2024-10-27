#include<stdio.h>
#include<conio.h>

int main()
{       int i;
	int choice = 12, flag;
clrscr();

	for(i=2 ; i<choice ; i++)
	{
		if(choice % i == 0)
		{
			flag = 0;
			break;
		}
		else
		{
			flag = 1;
		}
	}
	if(flag == 0)
	{
		printf("Not Prime");
	}
	else
	{
		printf("Prime");
	}

getch();
return 0;
}