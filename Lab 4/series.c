#include<stdio.h>
int main()
{
	int i,n;
	float sum;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

	sum = sum + 1/(float)i;
	}
	printf("Sum of the series is: %f\n",sum);
}
