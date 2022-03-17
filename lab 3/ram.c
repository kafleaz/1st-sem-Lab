// to print Ram 120  a 123.2
#include<stdio.h>
int main ()  
{  
    char i[20];
    int a;
    char b;
    float c;
    printf ("Enter your data: ");
    scanf ("%s %d %c %g" , i, &a, &b, &c);
    printf ("Your entered data are: %s \t%d \t%c \t%g" ,i ,a ,b ,c);

}
