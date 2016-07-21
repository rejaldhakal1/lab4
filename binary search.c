//Write a C program to implement binary search.

#include<stdio.h>
#include<stdlib.h>
int c=0;
int BinarySearch(int l,int h,int *a,int x)
{
    int u,mid,m;
    u=h-1,m=x;
    if(l<=u)
    {
        while(l<=u)
        {
            mid=(l+u)/2;
            if(m==a[mid])
            {
                c=1;
                break;
            }
            else if(m<a[mid])
            {
                 c=-1;
                 u=mid-1;
            }
            else
                l=mid+1;
        }
        return mid;
    }
    else
        return (-1);
}
int main()
{
    int *a,i,n,m,pos,b=0;
    printf("Enter the number of elements :\n");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
    {
         scanf("%d",(a+i));
    }
    printf("Enter the element to be searched :\n");
    scanf("%d",&m);
    pos=BinarySearch(b,n,a,m);
    if(c==-1)
        printf("The element %d is not present in the array\n",m);
    else
        printf("The element %d is in position %d",m,pos);
    return 0;
}
