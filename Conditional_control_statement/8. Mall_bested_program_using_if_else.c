#include <stdio.h>
#include <conio.h>
int main()
{
  float Amount =0.0;
  
  printf("\n enter your account balance =");
  scanf("%f",&Amount);
  
  if(Amount > 1000)
  {
    printf("\n\n\t welcome to mall !!! \n");
    
    if(Amount > 10000)
    {
      printf("\n\n\t you can be prime member of this mall !!!");
      printf("\n\n\t have a nice shopping !!!");
    }
   }
   else
   {
      printf("\n\n\t minimum balance required to shop here is 1000 + \n");
   }
   if(Amount >500)
   {
      printf("\t But you can visit our outlet at corner !!!");
   }
   else
   {
      printf("\n\t you are not eligible to shop !!!");
   }
  printf("\n\n thanks for visit !!!");
  
  getch();
  return 0;
 }
    
