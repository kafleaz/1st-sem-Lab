#include <stdio.h>

int main() 
{
	int  m, n;
	float r;
    printf("Enter the value of m and n:"); 
    scanf("%d%d",&m,&n);
    r=(float)m/n;
    
	if((n% m)== 0)
	{
		printf("M is multiple of n \n");
	} 
	else 
	{
		printf("Value of result:%f",r);
	}
	return 0;
}

