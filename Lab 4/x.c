#include<stdio.h>
int main()
{
	int a,b,c;
	float x;
	printf("Enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	x=(float)a-b/3+c*2-1;
	printf("Value of x: %f",x);
}
