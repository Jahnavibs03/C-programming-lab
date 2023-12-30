//To find the trace and norm of a given matrix A (M x N) by checking the compatibility and print both input & output matrices with suitable headings. Use user-defined functions to find their trace and norm.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int a[100][100],t=0,i,j,r,c,p,s=0;
    float n;
    system("clear");
    printf("enter the order of the matrices\n");
    scanf("%d %d",&r,&c);
    printf("enter the elements of matrix \n");
    for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
    {scanf("%d",&a[i][j]);}}
    printf("entered matrix is\n");
    for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
    {printf("%3d",a[i][j]);}
        printf("\n");
    }
        for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
    {p=a[i][j]*a[i][j];
        s=s+p;}
    }
   n=sqrt(s);
   printf("normal of the matrix is %f\n",n);
   for(i=0;i<r;i++)
   t=t+a[i][i];
   printf("trace of the given matrix is %d",t);
}
    

