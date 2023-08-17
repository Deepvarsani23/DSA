#include<stdio.h>
int main()
{
    int a=1,b=2,c,d=a;
    c=a||++b||--d;
    printf("a:%d ,b:%d, c:%d, d:%d",a,b,c,d);
}