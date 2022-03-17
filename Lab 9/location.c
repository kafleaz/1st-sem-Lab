/*
Write a program 
to display memory location reserved by a variable.*/
#include<stdio.h>
int main()
{
    int a = 8, b = 10, *p = &a, *q = &b;
    printf("value of a is %d and  its address is %u\n",a,&a);
    printf("value of a is %d and  its address is %u\n",*p,p);
    printf("value of b is %d and  its address is %u\n",*(&b),&b);
    printf("value of b is %d and  its address is %u\n",b,q);
}