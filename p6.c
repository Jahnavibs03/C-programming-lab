//To generate and print all the prime numbers between range N1 and N2, where ‘N1’ and ‘N2’ are value supplied by the user.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int n1,n2,n,i,f;
    sytem("clear");
    printf("enter the range to print the prime numbers\n");
    scanf("%d %d",&n1,&n2);
    printf("prime numbers between %d and %d are:\n",n1,n2);
    for(n=n1;n<=n2;n++)
    { f=0;
    for(i=2;i<=n/2;i++)
    { if(n%i==0)
    {f=1;
    break;}}
    if(f==0)
    printf("%d\n",n);}
}

