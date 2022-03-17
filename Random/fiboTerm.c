#include<stdio.h>
int main()
{
    int n, t1=0, t2=1, nexterm;
    printf("Enter a term: ");
    scanf("%d",&n);
    printf("Fibonaci series:%d\t%d\t",t1,t2);
    nexterm=t1+t2;
    for ( int i = 3; i <= n ; ++i)
    {
        printf("%d\t", nexterm);
        t1=t2;
        t2=nexterm;
        nexterm=t1+t2;
        
    }
    

}