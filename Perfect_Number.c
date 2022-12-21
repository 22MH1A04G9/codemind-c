#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,a,i,sum=0;
    scanf("%d",&x);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        sum=sum+i;
    }
    if(x==sum)
    printf("True");
    else
    printf("False");
}