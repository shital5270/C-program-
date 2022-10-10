#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
  char csrc[50]={};
  int len=0;
  
  puts("\n enter a string :");
  gets(csrc);
  
  len =strlen(csrc);
  
  printf("Length of given strtng is =%d",len);
  
  getch();
  return 0;
 }