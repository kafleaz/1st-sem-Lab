#include <stdio.h>
int main()
{
	float p,cp,d;
	p=1000.5;
	cp=p/0.9;
	d=(0.1*p)/0.9;
	printf("Amount before discount=%f\n",cp);
	printf("Discount=%f",d);
}
