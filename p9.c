//To input N integer numbers into a single dimension array, sort them in to ascending order using BUBBLE SORT technique, and then to print both the given array and the sorted array with suitable headings.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int n,a[100],i,j,t;
    system("clear");
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("entered array is\n");
     for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("sorted list in ascending order is\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
