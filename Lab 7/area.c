#include<stdio.h>
int main()
{
    int l,b,area;
    printf("Enter the length and breath of rectangle:");
    scanf("%d%d",&l,&b);
    area= mult (l,b);
    printf("Area of rectangle:%d",area);

}

int mult (int x, int y)
{
    int area;
    area= x*y;
    return area;
}