by#include<stdio.h>
#include<conio.h>
int main()
{
	int No=0,Zcnt=0,Temp=0,Dig=0;

	up:
	printf("\n\n Enter positive integer number to count of zero=");
	scanf("%d",&No);

	if(No<=0)
	{
		printf("\n Invalid number please enter positive integer number.");
		goto up;
	}

	Temp=No;

	while(Temp>0)
	{
		Dig=Temp%10;

		if(Dig==0)
		{
			Zcnt++;
		}
		Temp=Temp/10;
	}
	printf("\n\n count of zero in given number %d is %d",No,Zcnt);
	printf("\n\n Thanks !!! \n ");

	getch();
	return 0;
}
