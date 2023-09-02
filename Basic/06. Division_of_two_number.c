#include <stdio.h>
#include <conio.h>
 int main()
 {
   int no1=0,no2=0,div=0;
   printf("\n enter two number for division");
   scanf("%d%d",&no1,&no2);
   
   div=no1/no2;
   printf("\n division of %d/%d=%d",no1,no2,div);
   getch();
   return 0;
  }
