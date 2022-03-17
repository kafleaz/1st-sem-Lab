#include<stdio.h>
struct date
{
    int d;
    int m;
    int y;
};
struct employee
{
    char name[16];
    int id;
    float salary;
    struct date doj;
};
int main()
{
    struct employee e[2];
    int i;
    for ( i =1 ; i <=2; i++)
    {
    printf("Enter the details of Employee: ");
    scanf("%s %d %f",e[i].name,&e[i].id,&e[i].salary);
    }
    for (i = 1; i <=2 ; i++)
    {
    printf("Name:%s\n Id:%d\n Salary:%f\n ",e[i].name,e[i].id,e[i].salary);
    }
    return 0;
}
