#include <stdio.h>
int main()
{
	int a[50],*p=a,i, j,swap,n;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] = ",i+1);
		scanf("%d",(p+i));
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p+j)<*(p+i))
			{
				swap=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=swap;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d ",i+1,*(p+i));
	}
}