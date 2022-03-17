#include <math.h>
#include <stdio.h>
int main() 
{
    double b, e, result;
    printf("Enter a base number: ");
    scanf("%lf", &b);
    printf("Enter an exponent: ");
    scanf("%lf", &e);
    result = pow(b, e);

    printf("Result= %.2lf", result);
    return 0;
}

