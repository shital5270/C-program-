#include <stdio.h>
#include <conio.h>
int main()
{ 
  int r=0,c=0,rcnt=0;
  printf(" enter a pattern \n",rcnt);
  scanf("%d",&rcnt);
  
  for(r=1;r<=rcnt;r++)
  {
    for(c=1;c<=rcnt;c++)
    { 
      if(c==1||c==r||rcnt==c)
      printf(" * ");
      else
      printf("   ");
    }
    printf("\n");
  }
 getch();
 return 0;
}
