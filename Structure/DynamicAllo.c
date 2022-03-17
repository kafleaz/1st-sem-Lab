#include<stdio.h>

struct student
{
    char name[20];
    int roll;
};
int main()
{
    struct student *stuPtr;
    int i,n,e[i];
    printf("Enter the number of student:");
    scanf("%d",&n);
    ptr=(struct student*) malloc(n* sizeof(struct student));
    for ( i = 0; i < n; i++)
    {
    printf("Enter student details:\n");
    scanf("%s %d",(ptr+i)->name, &(ptr+i)->roll);
    }
    for ( i = 0; i < n; i++)
    {
    printf("Name=%s\n Roll no.:%d",stuPtr->name,(*stuPtr).roll);
    }
    return 0; 
}