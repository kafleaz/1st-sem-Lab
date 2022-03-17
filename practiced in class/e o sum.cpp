#include<stdio.h>
int main()
{
	int a[5],i, esum=0,osum=0;
	printf("Enter array elements:");
	for (i=0;i<10;i++);
	{
		scanf("%d",&a[i]);
		if((a[i]%2==0))
		{
			esum=esum+a[i];
		}
		else
		{
			osum=osum+a[i];
		}
	}
	printf("odd sum=%d\n Even sum=%d",osum,esum);
}
