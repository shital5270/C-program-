#include <stdio.h>
#include <conio.h>
int main()
{
  int i=0,bill_sum=0,bill[]={0};
  
  for(i=0;i<4;i++)
  {
    printf("\n enter bill no %d =",(i+1));
    scanf("%d",&bill[i]);
    
    bill_sum=bill_sum+bill[i];
  }
  printf("\n bills generated today => \n");
  
  for(i=0;i<bill_sum;i++)
  {
    printf("\n amount in bill no %d =%d",(i+1001),bill[i]);
  }
  printf("/n\n ======*****====== \n");
  printf(" \n total amount received today =%d",bill_sum);
  printf("\n\n ======*****====== \n");
  
  getch();
  return 0;
 }
