#include<stdio.h>

struct student
{
    char name[20];
    int roll;
};
int main()
{
    struct student *stuPtr, s;
    stuPtr = &s;
    printf("Enter the details of student:");
    scanf("%s %d",s.name,&s.roll);

    printf("Student Details:\n");
    printf("Name=%s\n Roll no.:%d\n",(*stuPtr).name,(*stuPtr).roll);
    printf("Name=%s\n Roll no.:%d\n",stuPtr->name,stuPtr->roll);
    printf("Name=%s\n Roll no.:%d\n",s.name,s.roll);
    return 0; 
}