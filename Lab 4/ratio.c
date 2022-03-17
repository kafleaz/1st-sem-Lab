#include<stdio.h>
int main()
{
	int m,f;
	float r;
	printf("Enter the number of male:");
	scanf("%d",&m);
	printf("Enter the number of female:");
	scanf("%d",&f);
	r=(float)m/f;
	printf("The ratio between male and female is:%f",r);
	return 0;	
}
