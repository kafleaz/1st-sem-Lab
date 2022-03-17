#include<stdio.h>
struct complex
{
    int real;
    int img;
}c1,c2,c3;
int main()
{
    Printf("Enter c1:");
    scanf("%d%d",&c1.real,&c1.img);
    Printf("Enter c2 :");
    scanf("%d%d",&c2.real,&c2.img);

    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    printf("Sum:%d+%di",c3.real,c3.img);

}