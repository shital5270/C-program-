#include <stdio.h>
#include <conio.h>
int main()
{
    int No1=0,No2=0;
   up:
     printf("\n enter 2 numbers to find maximum from them =>");
     
     printf("\n enter 1st number");
     scanf("%d",&No1);
     
     printf("\n enter 2nd number");
     scanf("%d",&No2);
     
     if(No1==No2)
     {
       printf("\n both numbers are equal");
       printf("\n to compare there must 2 different numbers");
       
       printf("\n=====*****=====");
       goto up;
     }
     
     if(No1>No2)
     {
       printf("\n number1 %d is maximum",No1);
     }
     else
     {
       printf("\n number2 %d is maximum",No2);
     }
     
     printf("\n thanks");
     
     getch();
     return 0;
     
 }