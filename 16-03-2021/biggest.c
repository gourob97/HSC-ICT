#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers\n ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>=b && a>=c)
    {
        printf("a is the largest");
    }

    else if(b>=a && b>=c)
    {
        printf("b is the largest");
    }

    else
    {

        printf("c is the largest");
    }

    return 0;
}
