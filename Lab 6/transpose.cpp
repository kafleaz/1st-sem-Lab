#include<stdio.h>
int main()
{
    int a[100][100], m, n;
    printf("Enter the number of rows and columns ");
    scanf("%d%d",&m,&n);
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
		{
			printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The traspose matrix of %d*%d is \n",m,n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}
