/*Make a program using structure of booklist having data member’s title, author, and cost. Enter four data and calculate total cost.*/
#include<stdio.h>
struct book
{
    char name[25];
    char writer[25];
    float cost;
};

int main()
{
    int n;
    float t_cost =0;
    printf("Enter the number of book \n");
    scanf("%d",&n);
    struct book b[n];
    printf("Enter the detail\n");
    for(int i; i < n; i++)
    {
        printf("Enter the name, author and cost of the book ");
        scanf("%s %s %f",b[i].name,b[i].writer,&b[i].cost);
        /*printf("Enter the name of the book ");
        scanf("%s",b[i].name);
        printf("Enter the name of author of the book ");
        scanf("%s",b[i].writer);
        printf("Enter the cost of the book ");
        scanf("%f",&b[i].cost);
        printf("\n");*/
        t_cost = t_cost + b[i].cost;
    }
    for(int i = 0;i < n; i++)
    {
        printf("Name: %s\n",b[i].name);
        printf("Author: %s\n",b[i].writer);
        printf("Cost: %3.f\n",b[i].cost);
    }
    printf("The total cost is %3.f",t_cost);
}