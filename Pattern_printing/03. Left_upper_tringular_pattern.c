#include <stdio.h>
#include <conio.h>
 int main()
 {
   int r=0,c=0,cnt=0;
   
   printf("\n enter count of rows and columns=");
   scanf("%d",&cnt);
   
   printf("\n\n pattern is =>\n\n");
   
   for(r=1;r<=cnt;r++)
   {
     for(c=1;c<=cnt;c++)
     { 
       if(r+c<=cnt+1)
       {
         printf(" * ");
       }
     }
     printf("\n");
   }
   printf("\n\n thanks !!! \n");
  
   getch();
   return 0;
 }
