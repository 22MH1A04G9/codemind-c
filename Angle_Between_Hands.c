#include<stdio.h>
#include<math.h>
    int main()
    {
        float c,d;
        int a,b;
        scanf("%d:%d",&a,&b);
        c=abs((a*30)-(b*5.5));
        d=360-c;
        if(c<d)
        {
            printf("%.1f",c);
        }
        else
        {
            printf("%.1f",d);
        }
    }
