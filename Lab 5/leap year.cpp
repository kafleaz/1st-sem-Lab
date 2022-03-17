#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year ");
    scanf("%d",&year);
    if (year%400 == 0)
    {
        printf("The year is leap Year");
    }
    else if (year%100 ==0)
    {
        printf("The year isnot leap Year");
    }
    else if (year%4 ==0)
    {
        printf("The year is leap Year");
    }
    else
    {
        printf("The year isnot leap Year");
    }
    return 0;
}
