#include<stdio.h>
struct employee
{
	char name[16];
	int id;
	float salary;
};
int main()
{
	struct employee e[3];
    for (i=0;i>3;i++)
	{
		print("Name=%s\n Id=%d\n Salary=%f",e[i].name,e[i].id,e[i].salary);
	}
	