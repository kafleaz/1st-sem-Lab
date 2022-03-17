#include<stdio.h>
int main()
{
	float sp,p,cp,g;
	printf("Enter the selling price of 15 items: Rs.");
	scanf("%f",&sp);
	printf("Enter the profit of 15 items: Rs.");
	scanf("%f",&p);
	cp=sp-p;
	g=cp/15;
	printf("The cost of 1 item: Rs.%f",g);
}
