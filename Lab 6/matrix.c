/*Write a program to read a matrix of size m*n and print its transpose.*/
#include<stdio.h>
int main()
{
    int a[100][100], m, n;
    printf("Enter the number rows and columns:");
    scanf("%d%d",&m,&n);
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
        	 printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix of %d*%d is \n",m,n);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
