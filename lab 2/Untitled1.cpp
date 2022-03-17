#include<stdio.h>
int main
{
	float bs,da,hr,gs;
	printf("Enter basic salary of Ram:");
	scanf("%f",&bs);
	da=bs*40/100;
	hr=bs*20/100;
	gs=bs+da+hr;
	printf("the gross salary of Ram=%f",gs);
	
}
