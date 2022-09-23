#include <stdio.h>  
#include <conio.h>
int main()
{
     int num =0;
     printf("\nEnter an integer Number =");
     scanf("%d",&num);
     if(num % 2 ==0)
     {
            printf("\nGiven number is even");
     }
     else
     {
            printf("\nGiven number is odd");
     }
     getch();
     return 0;
}
     