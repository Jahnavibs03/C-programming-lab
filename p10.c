//To input N integer numbers in ascending order into a single dimension array, and then to perform BINARY SEARCH for a given Key integer number and report success or failure in the form of a suitable message.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int f,l,m,s,n,a[100],i,j,t;
    system("clear");
    printf("enter the number of terms\n");
    scanf("%d",&n);
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
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
    printf("sorted list is.....\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
        f=0;
    l=n-1;
    m=(f+l)/2;
    printf("enter the element to be searched\n");
    scanf("%d",&s);
    while(f<=l)
    {
        if(a[m]<s)
        f=m+1;
        else if(a[m]==s)
        {printf("%d found at the location %d\n",s,m+1);
        break;}
        else
        l=m-1;
        m=(f+l)/2;
    }
    if(f>l)
    printf("not found!!!!");
}

