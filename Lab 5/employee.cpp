#include<stdio.h>
int main()
{
    int cy, jy ,y;
    printf("Enter the year that employee join the organization:");
    scanf("%d",&jy);
    printf("Enter the current year:");
    scanf("%d",&cy);
    y = cy - jy;
    if (y>3)
    {
        printf("The Employee will get the bonus of Rs.2500");
    }
    return 0;
}
