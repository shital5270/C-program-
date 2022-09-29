#include <stdio.h>
#include <conio.h>
int main()
{
    int no=0;
   
    printf("\n ascii table =>\n \n");
    
    for(no =0;no<128;no++)
    {
        printf("\n %d=%c",no,no);
    }
    printf("\n thanks");
    
    getch();
    return 0;
    
 }