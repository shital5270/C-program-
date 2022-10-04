#include <stdio.h>
#include <conio.h>
int main()
{
	int Age=0;

	printf("\n\t Enter your age =");
	scanf("%d",&Age);

	if(Age>=18)
	{
		printf("\n\t you are eligible for vote ");
	}
	else
	{
		printf("\n\t you are not eligible for vote ");
	}

	printf("\n\t\t Thanks !!! \n");

	getch();
	return 0;
}
