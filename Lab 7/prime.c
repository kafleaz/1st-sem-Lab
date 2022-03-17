#include<stdio.h>
int main()
{
    int n,pri;
    printf("Enter a number:");
    scanf("%d",&n);
    pri= calc(n);

    if (pri==1)
    {
        printf("%d is a prime number.",n);
    }
    else
    {
        printf("%d is not a prime number.",n);
    }
    return 0;
}
int calc(int a)
{
    int i;
    for ( i = 2; i<=a-1; i++)
    {
        if(a%i==0)
        return 0;
    }
    return 1;
}