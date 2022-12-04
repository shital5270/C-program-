#include <stdio.h>
#include <conio.h>
int main()
{
    int num1=0,num2=0;
    
    printf("\n enter two integer number");
    scanf("%d%d",&num1,&num2);
    (num1==num2)? printf("\n both numbers are equal"):(num1>num2)? printf("\n number %d is maximum",num1): printf("\n number %d is maximum",num2);
    
    printf("\n thanks");
    
    getch();
    return 0;
    
 }
