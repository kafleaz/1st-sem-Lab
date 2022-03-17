#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, d ,e ,f;
    float g;
    printf("Enter the value of a, b, c, d:\n");
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    e = a+b;
    f = c-d;
    g = (float)e/f;
    if (f != 0)
    {
        printf("The rato of (a+b) and (c-d) is: %f",g);
    }
    else
    {
        printf("The ratio is invalid");
    }
    return 0;
}
