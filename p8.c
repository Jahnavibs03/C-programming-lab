//To reverse a given four-digit integer number and check whether it is a palindrome or not. Output the given number with suitable message.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int n,n1,r,d=0;
    system("clear");
    printf("enter the number\n");
    scanf("%d",&n);
    if(n<0)
    n=-n;
    n1=n;
    while(n>0)
    {r=n%10;
    d=d*10+r;
    n=n/10;}
    if(d==n1)
    printf("the number is a palindrome\n");
    else
    printf("the number is not a palindrome\n");
    }
