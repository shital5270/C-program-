#include<stdio.h>
#include<conio.h>
int main() 
{
    int number;
    printf("Enter an int value to check given number is odd or even\n");
    scanf("%d",& number);
    
    if(number%2==0)
    printf("given number%d is even number\n ",number);
    else
    printf("given number%d is odd number\n ", number);
    return 0;
 }
 
