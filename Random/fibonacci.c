#include<stdio.h>
int main()
{
    int i, n, t1=0, t2=1, nexterm=0;
    printf("enter a positive integer:");
    scanf("%d",&n);
    printf("Fibonaci series:%d\t %d\t",t1,t2);
    nexterm=t1+t2;
    while (nexterm<=n)
    {
        printf("%d\t",nexterm);
        t1=t2;
        t2=nexterm;
        nexterm=t1+t2;
    }
    

}