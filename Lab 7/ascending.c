#include<stdio.h>
int asc(int a[100],int n);
int main()
{
    int a[100],i,n,temp;
    printf("Enter a size of an array:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the element of array:");
        scanf("%d",&a[i]);
    }
    printf("Array in ascending order:\n");
    temp=asc(a,n);
    for (i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
    

}
int asc(int a[10],int n)
{
    int i,j,temp;
    for ( i=0; i<n-1 ; i++)
    {
        for (j=i+1; j < n; j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
}