#include <stdio.h>
#include <conio.h>
#include <string.h>

int main ()
{
      char FristName[20] = "";
      char LastName[20] = "";
      char Name[40] = "";
      
      printf("\n Enter Frist Name ");
      gets(FristName);
      printf("\n Enter Last Name ");
      gets(LastName);
      
      strcpy(Name,strcat(FristName,LastName));
      
      printf("\n Name Generated is = %s",Name);
      
      getch();
      return 0;
      
 }