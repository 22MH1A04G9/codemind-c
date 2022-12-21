#include<stdio.h>
int main()
{
    int n,s=0,t,r;
    scanf("%d",&n);
    t=n;
    n=n*n;
    while( n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    if(t==s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}