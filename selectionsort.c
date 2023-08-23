#include<stdio.h>
#include<stdlib.h>
#define n 10
int a[n],i,j,x;
int select(int a[])
{
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
}
int main()
{
    int a[n],i;
    for(i=0;i<n;i++)
    {
        a[i]=rand()%10+1;
        printf("%d ",a[i]);
    }
    select(a);
    printf("\nsorted : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
