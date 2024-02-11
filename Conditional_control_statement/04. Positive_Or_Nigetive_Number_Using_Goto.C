#include<stdio.h>
#include<conio.h>
int main()
{
	int num=0,cnt=0;

	up:
	printf("\n\t ======*****====== \n");
	printf("\n\t enter positive number =");
	scanf("%d",&num);

	if(num<=1)
	{
	printf("\n\t invalid number \n\n\t please enter another number \n");
	getch();
	system("cls");
	goto up;
	}
	for(cnt=2;cnt<num;cnt++)
	{
		if(num %cnt ==0)
		{
			break;
		}
	}
	if(cnt==num)
	{
		printf("\n\t %d is prime number",num);
	}
	else
	{
		printf("\n\t  %d is not a prime  number",num);
	}
	printf("\n\n\t ======*****======");
	printf("\n\n\t Thanks !!! \n");

	getch();
	return 0;
}
