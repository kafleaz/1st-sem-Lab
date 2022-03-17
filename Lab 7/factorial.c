#include<stdio.h>
int main()
{
    int n,fact;
    printf("Enter a number:");
    scanf("%d",&n);
    fact=mult(n);
    printf("The factorial of %d is:%d",n,fact);
}

int mult(int x,int i )
{
    int fact=1;
    for ( i = 1; i <=x; i++)
    {
        fact=fact*i;
    }
    return fact;
}