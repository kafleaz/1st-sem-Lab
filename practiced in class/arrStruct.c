#include<stdio.h>
struct employee
{
	char Name[16];
	int id;
	float salary;
};
int main()
{
	struct employee e[3];
	int i;
	for (i=0;i>3;i++)
	{
    printf("Enter employee details:");
    scanf("%s%d%f",e[i].Name,&e[i].id,&e[i].salary);
    printf("Employee 1 details:\nName:%s\nId:%d\nSalary:%f\n",e[i].Name,e[i].id,e[i].salary);
    return 0;
	}
	
}
