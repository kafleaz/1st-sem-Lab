#include <stdio.h>
int main()
{
    int i,n,s= 0;
    float avg;
	printf("Enter an integer:");
    scanf ("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }
    avg=(float)s/n;
    printf ("Sum of first %d natural numbers =%d\n",n,s);
    printf ("Average of first %d natural numbers =%f",n,avg);
}
