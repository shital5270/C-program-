#include <stdio.h>
#include <conio.h>
int main()
{
  int no=0;
  up:
    printf("\n enter a number to check whether it is positive or negative =");
    
    printf("\n enter a number");
    scanf("%d",&no);
    
    if (no==0)
    {
      printf("\n given number 0 is natural");
      printf("\n ======*****====== \n");
      goto up;
    }
    (no>0)?printf("\n %d is positive number",no):printf("\n %d is negetive number",no);
    printf("\n Thanks");
    
    getch();
    return 0;
 }