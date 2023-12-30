//To find the value of cos(x) using the series, 1 - x2/2! + x4/4! - x6/6! + x8/8! - ... up to N terms accuracy (With and without using in-built function).

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int n,i,x1;
    float t,y,x,c;
    system("clear");
    printf("enter the value of x in degrees\n");
    scanf("%d",&x1);
    printf("enter the number of terms(accuracy) \n");
        scanf("%d",&n);
   x=(3.14/180)*x1;
   i=1;
   c=1;
   t=1;
   while(i<=n)
   {
      
       t=(-t*x*x)/(2*i*(2*i-1));
       c=c+t;
             i=i+1;
   }
   printf("sum of the cos(%d) series without using library function is %f\n",x1,c);
   printf("sum of the cos(%d) series using library function is %f\n ",x1,cos(x));
}
