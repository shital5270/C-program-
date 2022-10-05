#include <stdio.h>
#include <conio.h>
int main()
{
    int num=0,Temp=0,fact=0;
   
    up:
    printf("\n enter an positive integer number");
    scanf("%d",&num);
        
    if(num <=0)
        {
            printf("\n only positive value required");
            goto up;
        }
        
        fact=1;
        Temp=num;
        
        while(Temp>1)
        {
            fact=fact*Temp;
            Temp--;
        }
            printf("\n\t factorial of given number%d=%d",Temp,fact);
            printf("\n\n thanks !!! \n");
            
            getch();
            return 0;
            
 }
            