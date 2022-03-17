#include<stdio.h>
int main()
{
	float pi=3.14;
	float r,v,a;
	printf("Enter the radious of sphere:");
	scanf("%f",&r);
	v=4*pi*r*r*r/3;
	a=4*pi*r*r;
	printf("Volume of sphere:%f \n",v);
	printf("Area of sphere:%f",a);
	
}
