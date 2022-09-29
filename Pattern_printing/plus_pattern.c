#include <stdio.h>
#include <conio.h>
int main()
{
  int r=0,c=0,cnt=0;
  
  printf("\n enter odd number for count of rows and column=");
  scanf("%d",&cnt);
  
  printf("\n enter pattern is => \n\n");
  
  for (r=1;r<=cnt;r++)
  {
    for (c=1;c<=cnt;c++)
    {
      if(r==cnt/2+1||c==cnt/2+1)
      {
        printf(" * ");
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }
  printf("\n\n thanks !!!");
  
  getch();
  return 0;
 }