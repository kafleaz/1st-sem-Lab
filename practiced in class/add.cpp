#include<stdio.h>
int add(int a,int b);
int main()
{
	int x,y,sum;
	printf("enter any two numbers:");
	scanf("%D%D",&x,&y);
	sum=(add(x,y));
	printf("\nsum=%d",sum);
}
int add(int p,int q)
{
	int sum;
	sum=p+q;
	return sum;
}
