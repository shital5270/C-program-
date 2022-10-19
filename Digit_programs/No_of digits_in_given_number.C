#include<stdio.h>
#include<conio.h>
int main()
{
	int No=0,dcnt=0,Temp=0;

	up:
	printf("\n\n Enter positive integer number to calculate number of digits =");
	scanf("%d",&No);

	if(No<=0)
	{
		printf("\n Invild number please enter positive integer number.");
		goto up;
	}

	Temp=No;

	while(Temp>0)
	{
		dcnt++;
		Temp=Temp/10;
	}
	printf("\n\n No of digits in given number %d is =%d",No,dcnt);
	printf("\n\n Thanks !!! \n");

	getch();
	return 0;
}

