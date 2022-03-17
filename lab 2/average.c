#include<stdio.h>
int main()
{
    
    float num, sum=0, a;
    int i, n;
	printf("Enter number of elements:  ");
    scanf("%d", &n);
    printf("Enter %d elements \n", n);
    for(i = 1; i<=n; i++)
    {
        scanf("%f", &i);
        sum=sum+i;
    }
    a=sum/n;
    printf("Average of the entered numbers is  %f", a);
}
