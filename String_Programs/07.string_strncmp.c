#include <stdio.h>
#include <conio.h>
#include <string.h>

int main ()
{
      int count =0;
      char Name[20] ="";
      char SNm[20] ="";
      
      printf("\n Enter Name1 = ");
      gets(Name);
      printf("\n Enter Name2 = ");
      gets(SNm);
      
      count=strcmp(Name,SNm);
      
      if(count ==0)
      {
          printf("\n string 1st has 4 Lettes are Same as 2nd string "); 
      }
      else
      {
          printf("\n string 1st has 4 Lettes are different as 2nd string ");
      }
      
      getch();
      return 0;
      
 }
