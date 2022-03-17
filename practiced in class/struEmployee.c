#include<stdio.h>
#include<string.h>
struct empl
{
    char Name[20];
    int id;
    float salary;
};
int main()
{
    struct empl e1,e2,e3;
    printf("Enter employee details:");
    scanf("%s%d%f",e1.Name,&e1.id,&e1.salary);
    printf("Enter employee details:");
    scanf("%s%d%f",e2.Name,&e2.id,&e2.salary);
    printf("Enter employee details:");
    scanf("%s%d%f",e3.Name,&e3.id,&e3.salary);
    printf("Employee 1 details:\nName:%s\nId:%d\nSalary:%f\n",e1.Name,e1.id,e1.salary);
    printf("Employee 2 details:\nName:%s\nId:%d\nSalary:%f\n",e2.Name,e2.id,e2.salary);
    printf("Employee 3 details:\nName:%s\nId:%d\nSalary:%f\n",e3.Name,e3.id,e3.salary);
    return 0;
}   
