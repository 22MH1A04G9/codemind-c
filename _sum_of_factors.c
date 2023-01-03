#include<stdio.h>
void odd(int i,int n)
{
    int sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    printf("%d",sum);
}
int main()
{
    int i,n;
    scanf("%d",&n);
    odd(i,n);
}