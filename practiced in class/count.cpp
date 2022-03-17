#include<stdio.h>
int main()
{
	int a[10],i, ecount=0,ocount=0;
	printf("Enter array elemrnts:");
	for (i=0;i<10;i++);
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			ecount++;
		}
		else
		{
			ocount++;
		}
	}
	printf("odd count=%d\n Even count=%d",ocount,ecount);
}
