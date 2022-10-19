#include <stdio.h>
#include <conio.h>
int main ()
{
  int no=0,cnt=0;
  
  printf("\n enter a number to print it's table =");
  scanf("%d",&no);
  
  for(cnt=1;cnt<=10;cnt++)
  {
    printf("\n %d",no*cnt);
  }
  printf("\n\n thanks");
  
  getch();
  return 0;
 }
