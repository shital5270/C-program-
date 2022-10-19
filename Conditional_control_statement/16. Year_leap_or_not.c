#include <stdio.h>
#include <conio.h>
int main ()
{
  int year=0;
  
  printf("\n\t enter year =");
  scanf("%d",&year);
  
  if(year%4==0)
  {
    printf("\n\t %d is leap year",year);
  }
  else
  {
    printf("\n\t %d is not leap year",year);
  }
  
  printf("\n\n\t thanks !!! \n");
  getch();
  return 0;
 }
