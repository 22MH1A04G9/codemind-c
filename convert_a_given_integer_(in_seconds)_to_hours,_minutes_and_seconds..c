#include<stdio.h>
int main()
{
    int n,m,h,s;
    scanf("%d",&n);
    h=n/3600;
    m=(n-h*3600)/60;
    s=(n-h*3600-m*60);
    printf("H:M:S-%d:%d:%d",h,m,s);
}