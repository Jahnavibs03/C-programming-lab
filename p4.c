//To find the sum of individual digits of a positive integer number reducing into single digit.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
   int n,d=0,s=0;
    system("clear");
    printf("enter the number:\n");
    scanf("%d",&n);
    START:
   while(n>0)
    { d=n%10;
    s=s+d;
    n=n/10;}
    if(s>9)
    {n=s;
    s=0;
    goto START;}
    printf("sum of the digits is %d\n",s);}

