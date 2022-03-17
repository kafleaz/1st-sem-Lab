#include<stdio.h>
int main()
{
    int n;
    float a, c, d, da;
    printf("Enter the number of item: ",n);
    scanf("%d",&n);
    printf("Enter the cost of per item: ");
    scanf("%f",&c);
    a = n * c;
    d = (float)10/100 * a;
    da = a - d;
    if (a > 1000)
    {
        printf("The total expenses is %f",da);
    }
    else
    {
        printf("The total expenses is %f",a);
    }
    return 0;
}
