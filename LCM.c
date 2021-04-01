#include<stdio.h>
int main()
{
    int b,c,t,i;

    scanf("%d %d",&b,&c);

    if(b<c)
    {
        t=b;
        b=c;
        c=t;
    }


    for(i=b;i<=b*c;i++)
    {
        if(i%b==0 && i%c==0)
        {
            printf("The LCM is %d",i);
            break;
        }
    }
}
