#include<stdio.h>
int main()
{
    int a[101], n , sum=0, ave;
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter tha elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    ave = sum/n;
    printf("The sum of elements of array is %d\n",sum);
    printf("The average of element of arrey is %d",ave);
}
