#include <stdio.h>
#include <conio.h>
int main ()
{
  int month =0;
  
  printf("\n enter no (1-12) of month =");
  scanf("%d",&month);
  
  if(month ==1)
  {
    printf("\n\t January");
  }
  else if (month==2)
  {
    printf("\n\t February");
  }
  else if (month==3)
  {
    printf("\n\t march");
  }
  else if (month==4)
  {
    printf("\n\t April");
  }
  else if (month==5)
  {
    printf("\n\t may");
  }
  else if (month==6)
  {
    printf("\n\t june");
  }
  else if (month==7)
  {
    printf("\n\t july");
  }
  else if (month==8)
  {
    printf("\n\t August");
  }
  else if (month==9)
  {
    printf("\n\t September");
  }
  else if (month==10)
  {
    printf("\n\t octomber");
  }
  else if (month==11)
  {
    printf("\n\t November");
  }
  else if (month==12)
  {
    printf("\n\t December");
  }
  else
  {
    printf("\n\t invalid number of month");
  }
  
  getch();
  return 0;
 }