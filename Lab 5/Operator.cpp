#include<stdio.h>
int main()
{
    char oper;
    int a, b;
    float c;
    printf("Enter any operator'+, -, *, /'\n");
    scanf("%c",&oper);
    printf("Enter any two number \n");
    scanf("%d %d",&a,&b);
    switch (oper)
    {
    case '+':
        c = a + b;
        printf("a + b = %f",c);
        break;
    case '-':
        c = a - b;
        printf("a - b = %f",c);
        break;
    case '*':
        c = a * b;
        printf("a * b = %f",c);
        break;
    case '/':
        c = a / b;
        printf("a / b = %f",c);
        break;
    
    default:
    printf("The operator you enter is invalid");
        break;
    }
    return 0;
}
