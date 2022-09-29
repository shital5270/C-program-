#include <stdio.h>
#include <conio.h>
int main ()
{
  int no=0,cnt=0;
    printf("\n enter a number to print it's table");
    scanf("%d",&no);
    
    printf("\n ********* \n");
    cnt=1;
    do
    {
      printf("\n\t %d", no*cnt);
      cnt ++;
    } while (cnt<=10);
    
    printf("\n ******* \n");
    printf("\n\n thanks !!! \n");
    
    getch();
    return 0;
 }
    