#include<stdio.h>
int main()
{
	int d,m;
	printf("Enter the number of days:");
	scanf("%d",&d);
	m=d/30;
	d=d/30;
	printf("Months:%d\n",m);
	printf("Days:%d",d);
}
