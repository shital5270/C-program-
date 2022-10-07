#include <stdio.h>
#include <conio.h>
int main ()
{
  int c=0,r=0,cnt=0;
  
  printf("\n Enter a pattern= \n");
  scanf("%d",&cnt);
  
  for(r=1;r<=cnt;r++) 
  {
    for(c=1;c<=cnt;c++)
    {
      if(c==1||c==cnt||c==r&&c+r<=cnt+1||r+c==cnt+1&&r<=cnt/2+1)
      printf(" * ");
      else
      printf("   ");
    }
    printf("\n");
  }
  getch();
  return 0;
 }