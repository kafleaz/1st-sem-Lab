#include<stdio.h>
int main()
{
    int n,rev;
    printf("Enter a number:");
    scanf("%d",&n);
    rev=rou(n);
    printf("The reversed number is:%d",rev);
}
int rou(int x,int y)
{
    int rev;
    while (x!=0)
    {
        y=x%10;
        rev=rev*10+y;
        x=x/10;
    }
    return rev;
}