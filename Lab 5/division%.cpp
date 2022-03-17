#include<stdio.h>
int main()
{
    int math, physics, cp, dl, iit;
    float tot ,per;
    printf("Enter the marks of Math, IIT, DL, Physics, c-programming:\n");
    scanf("%d %d %d %d %d",&math,&iit,&dl,&physics,&cp);
    tot = math + iit + dl + physics + cp ;
    per = tot/500 * 100;
    if (math<=100 && iit<=100 && dl<=100 && physics<=100 && cp<=100)
    {
        if (per<40)
        {
            printf("fail.\n");
        }
        else if (per>=40 && per<=49)
        {printf("Third Division.\n");}
        else if (per>=50 && per<=59)
        {
            printf("second Division.\n");
        }
        else if (per>=60 && per<=79)
        {
            printf("First Division.\n");
        }
        else if (per>=80)
        {
            printf("Distinction.\n");
        }
    }
    else
    {
        printf("invalide input.");
    }
    return 0;
}
