include<stdio.h>

struct student
{
    char name[20];
    int roll;
};
void display(char n[],int a)
{
    printf("Name :%s\n",n);
    printf("ROll No.:",a);

} 
int main()
{
    struct student s;
    printf("Enter the details of student:");
    scanf("%s %d",s.name,&s.roll);
    display(s.name,s.roll);
}