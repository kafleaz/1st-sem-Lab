#include <stdio.h>
#include <conio.h>
int main()
{
    char x, y , z;
    //getchar
    printf ("Enter your first character:");
    x= getchar();
    printf ("Entered character is: ");
    putchar (x);

    //getch
    printf (" \n\nEnter your second character:");
    y= getch();
    printf (" \nEntered character is: ");
    putchar (y);

    //getche//
    printf (" \n\nEnter your third character:");
    z = getche();
    printf (" \nEntered character is: ");
    putchar (z);
}
