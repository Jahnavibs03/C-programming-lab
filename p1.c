//To compute all the roots of a quadratic equation by accepting the non-zero coefficients. Print appropriate messages

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    float a,b,c,d,r1,r2;
    system(“clear”);
    printf("enter values of a,b and c of the quadratic equation : \n ax^2+bx+c=0\n");
    scanf("%f %f %f",&a,&b,&c);
    d=((b*b)-(4*a*c));
    if(a==0||b==0||c==0)
    printf("invalid!!!!!!\n");
    else if(d<0)
    printf("roots are imaginery\n");
    else if(d>0)
    { r1=((-b)+sqrt(d))/(2*a);
    r2=((-b)-sqrt(d))/(2*a);
    printf("roots are real and distinct\n root 1=%f\n root 2=%f\n",r1,r2);}
    else
    {r1=(-b)/(2*a);
    r2=(-b)/(2*a);
    printf("roots are real and equal\n root 1=%f\n root 2=%f\n",r1,r2);}
    
}
