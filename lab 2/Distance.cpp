#include<stdio.h>
int main()
{
	float d,m,f,i,cm;
	printf("Enter the distance between two cities in Km:");
	scanf("%f",&d);
	m=d*1000;
	f=d*3280.84;
	i=d*39370.80;
	cm=d*100000;
	printf("Distance in Meter=%f \n",m);
	printf("Distance in Feet=%f \n",f);
	printf("Distance in Inch=%f \n",i);
	printf("Distance in Centimeter=%f \n",cm);
}
