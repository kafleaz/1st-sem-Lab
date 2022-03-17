#include<stdio.h>
int main()
{
    int n, a=0, b=1, c;
    printf("Enter a integer:");
    scanf("%d",&n);
    printf("fibonacci series:%d\t%d\t",a,b);
    c=a+b;
    for (int i = 3; i <=n ; ++i)
    {
        printf("%d\t",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}