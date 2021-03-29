#include<stdio.h>
int main()
{

    int b,c,i,t;
    scanf("%d %d",&b,&c);

    if(b<c)
    {
        t=c;
        c=b;
        b=t;
    }

    for(i=c;i>=1;i--)

    {
        if(b%i==0 && c%i==0)
        {
            printf("the GCD is %d",i);
            break;
        }
    }

    return 0;
}
