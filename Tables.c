#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    for(i=1;i<=k;i++)
    {
        if(i%2==1)
        {
            printf("%d x %d = %d
",n,i,n*i);
        }
    }
}