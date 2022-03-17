#include<stdio.h>

int main()
{
    float s1,s2,s3,s4,s5,tm,p;
    printf("Enter the marks obtained by student:");
    scanf("%f%f%f%f%f",&s1, &s2, &s3, &s4, &s5);
    tm = s1+s2+s3+s4+s5;
    printf("Total marks obtained: %f  \n",tm);
    p = (tm)/500*100;
    printf("Perentage: %f",p);
}
