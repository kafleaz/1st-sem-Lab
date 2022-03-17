#include<stdio.h>
int gcd(int x,int y);
int main()
{
	int n1,n2,r;
	printf("Enter any two numbers:");
	scanf("%d%d",&n1,&n2);
	r=gcd(n1,n2);
	printf("GCD of %d and %d is %d",n1,n2,r);

}
int gcd(int a,int b)
{
	int rem;
	rem=a%b;
	if(rem==0)
		return b;
	else
	return(gcd(b,rem));
}
