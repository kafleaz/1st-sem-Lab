#include <stdio.h>
int main() 
{
	int i,num, p=0, n=0;
	printf("Input the numbers:\n");
	for(i=0; i<=100;i++) 
	{
		scanf("%d", &num);
		if(num<0)
		{
			n++;
		}
		else if (num>0)
		{
			p++;
		}
		else
		{
			break;
		}
	}
	printf("Negative count:%d \n",n);
	printf("Positive count:%d",p);
	
}
