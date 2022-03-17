#include<stdio.h>
int main()
{
    int a[100], n, ser;
    printf("Enter the size of array ");
    scanf("%d",&n);
    printf("Enter the element of array \n");
    for (int i = 0; i <n ; i++)
    {
        scanf("%D",&a[i]);
    }
    printf("Enter element to search ");
    scanf("%d",&ser);
    for(int i = 0; i < n; i++)
    {
        if (a[i] == ser)
        {
            i = i +1;
            printf("\n%d is found at position %d",ser,i);
        }
        
    }
}
