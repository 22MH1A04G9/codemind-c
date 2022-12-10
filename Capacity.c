#include<stdio.h>
int main()
{
    int S,T,B,kb,C;
    scanf("%d%d%d",&S,&T,&B);
    C=2*S*T*B*512;
    kb=C/1024;
    printf("%dkb",kb);
}