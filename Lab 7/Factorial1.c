#include<stdio.h>
int mult(int n);
int main()
{
    int n, f;
    printf("Enter the number ");
    scanf("%d",&n);
    f = mult(n);
    printf("The factorial is %d",f);
}
int mult(int n)
{
    if (n ==0)
    {
        return 1;
    }
    else
    {
        return(n*mult(n-1));
    }
}