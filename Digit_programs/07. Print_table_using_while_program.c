#include <stdio.h>
#include <conio.h>
 int main()
 { 
   int no=0,cnt=0;
   printf("\n enter a number to print it's table");
   scanf("%d",&no);
   
   cnt=1;
   printf("=======*=======\n");
   
   while (cnt<=10)
   {
     printf("\n %d",no*cnt);
     cnt ++;
   }
   printf("\n ======*====== \n");
   printf("\n\n thanks");
   getch();
   return 0;
 }
   
