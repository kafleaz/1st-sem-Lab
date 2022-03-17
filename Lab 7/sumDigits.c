#include<Stdio.h>
int main()
{
    int n,sum;
    printf("Enter a Number:");
    scanf("%d",&n);
    sum=add(n);
    printf("The sum of the digit:%d",sum);
}
int add(int x,int y)
{
    int sum;
    while(x>0)
    {
        y=x%10;
        sum=sum+y;
        x=x/10;
    }
    return sum;
}