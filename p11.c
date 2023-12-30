//To perform addition and subtraction of two matrices after checking their compatibility and print both input & output matrices with suitable headings.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int a[100][100],b[100][100],s[100][100],d[100][100],i,j,r,c;
    system("clear");
    printf("enter the order of the matrices\n");
    scanf("%d %d",&r,&c);
    printf("enter the elements of matrix 1\n");
    for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
    {scanf("%d",&a[i][j]);}}
    printf("entered matrix 1 is\n");
    for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
    {printf("%3d",a[i][j]);}
        printf("\n");
    }
     printf("enter the elements of matrix 2\n");
    for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
    {scanf("%d",&b[i][j]);}}
    printf("entered matrix 2 is\n");
    for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
    {printf("%3d",b[i][j]);}
        printf("\n");
    }
   
    for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
    {s[i][j]=a[i][j]+b[i][j];}}
     printf("sum of the matrices is1\n");
      for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
    {printf("%3d",s[i][j]);}
        printf("\n");
    }
    for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
    {d[i][j]=a[i][j]-b[i][j];}}
     printf("difference of the matrices is1\n");
      for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
    {printf("%3d",d[i][j]);}
        printf("\n");
    }
}
