#include<stdio.h>
struct student
{
	char n[20];
	int roll;
	struct address
	{
		char vdc [20];
		char dist [20];
	}a;
	
}obj;
int main()
{
	printf("Enter the name of the student\n");
	scanf("%s", &obj.n);
	printf("Enter the roll of the student\n");
	scanf("%s", &obj.roll);
	printf("Enter the VDC/Mucni. of the student\n"); 
	scanf("%s",&obj.a.vdc);
	printf("Enter the district of the student\n"); 
	scanf("%s",&obj.a.dist);
	printf("\n\nName=%s\n", obj.n);
	printf("Roll=%d\n", obj.roll);
	printf("VDC/Municipality=%s\n", obj.a.vdc);
	printf("District=%s", obj.a.dist);
}

