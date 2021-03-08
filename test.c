#include<stdio.h>
int main()
{
    int a,b;
    printf("This is a calculator. Enter two numbers ");
    scanf("%d %d",&a,&b);


    printf("The summation is %d\n",a+b);
    printf("The subtraction is %d\n",a-b);
    printf("The multiplication is %d\n",a*b);
    printf("The division is %d\n",a/b);

    return 0;
}
