#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter a number:");
    scanf("%d",&n);
    sum=add(n);
    printf("Sum of first natural number:%d",sum);
}
int add(int x,int i)
{
    int sum;
    for ( i =1; i<=x; i++)
    {
        sum=sum+i;
    }
    return sum;

}