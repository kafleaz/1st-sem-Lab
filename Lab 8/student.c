/*Create a structure named student that has name, roll, marks and remarks as members. WAP to read and display data entered by the user.*/
#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
    char remarks[100];
};
int main()
{
    struct student s[3];
    printf("Enter the detail of student\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nName:");
        scanf("%s",s[i].name);
        printf("\nRoll no.: ");
        scanf("%d",&s[i].roll);
        printf("\nMarks:");
        scanf("%f",&s[i].marks);
        printf("\nRemarks:");
        scanf("%s",s[i].remarks);
    }
    printf("The detail of students are\n");
    for(int i=0; i < 3; i++)
    {
        printf("Name: %s \nRoll no.: %d \nMarks: %f \n Remarks: %s",s[i].name,s[i].roll,s[i].marks,s[i].remarks);
    }
    
}