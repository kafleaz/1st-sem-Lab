#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (i = 1; n >= i;i++)
    {
        sum = sum + i*i;
    }
    printf("The sum of %d natural number are: %d",n ,sum);
    return 0;
}
