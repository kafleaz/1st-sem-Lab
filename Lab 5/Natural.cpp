#include <stdio.h>
int main()
{
    int i,n,s= 0;
	printf("Enter an integer number:");
    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }
    printf ("Sum of first %d natural numbers =%d",n,s);
}
