/*To generate and print the first ‘N’ Fibonacci numbers such that Fn = F(n-1) + F(n-2) where n>2.
A Fibonacci sequence is defined as “the first and second terms in the sequence are 0 and 1. Subsequent terms are found by adding the preceding two terms in the sequence”.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int n,f=0,a=0,b=1,i;
    system("clear");
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("fibonacci series\n %d\n %d\n",a,b);
    for(i=0;i<n-2;i++)
    {f=a+b;
    a=b;
    b=f;
    printf("%d\n",f);
    }
}
