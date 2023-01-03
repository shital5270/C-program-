#include<stdio.h>
#include<conio.h>
int main()
{
	int No=0,dmult=1,Temp=0,Dig=0;

	up:
	printf("\n\n Enter positive integer number to calculate multipication of digits =");
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
		dmult=dmult*Dig;
		Temp=Temp/10;
	}
	printf("\n\n multipication of digits in given number %d is %d\n",No,dmult);

	getch();
	return 0;
}
