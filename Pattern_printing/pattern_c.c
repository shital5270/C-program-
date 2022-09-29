#include <stdio.h>
#include <conio.h>
int main ()
{
  int r=0,c=0,rcnt=0;
  
  printf("\n enter a pattern to print= \n",rcnt);
  scanf("%d",&rcnt);
  
  for(r=1;r<=rcnt;r++)
  {
    for (c=1;c<=rcnt;c++)
    {
      if(r==1||r==rcnt||c==1)
      printf(" * ");
      else
      printf("   ");
    }
    printf("\n");
  }
  
  getch();
  return 0;
 }