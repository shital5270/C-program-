#include <stdio.h>
#include <conio.h>
int main()
{
  int day=0;
  
  printf("\n enter day number (1-7) to view day text =");
  scanf("%d",&day);
  
  if(day==1)
  {
    printf("\n monday");
  }
  else if (day==2)
  {
    printf("\n tuesday");
  }
  else if (day==3)
  {
    printf("\n Wednesday");
  }
  else if (day==4)
  {
    printf("\n thrusday");
  }
  else if (day==5)
  {
    printf("\n Friday");
  }
  else if (day==6)
  {
    printf("\n staturday");
  }
  else if (day==7)
  {
    printf("\n sunday");
  }
  else
  {
    printf("\n invaild day !!!");
  }
  printf("\n\n thanks !!!");
  
  getch();
  return 0;
 }
