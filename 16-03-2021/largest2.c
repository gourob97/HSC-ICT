#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {

        //daner kaaj
        if(a>c)
        {
           printf("%d is the largest",a);
        }

        else
        {
           printf("%d is the largest",c);
        }

    }
    else
    {

        //baaamer kaaj

        if(b>c)
        {
           printf("%d is the largest",b);
        }

        else
        {
            printf("%d is the largest",c);
        }
    }


    return 0;
}
