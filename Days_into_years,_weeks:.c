#include<stdio.h>
int main()
{
    int n,d,w;
    scanf("%d",&n);
    d=n/365;
    w=(n%365)/7;
    printf("%d
%d",d,w);
}