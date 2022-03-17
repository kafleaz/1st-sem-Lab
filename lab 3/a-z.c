#include<stdio.h>
int main()
{
   char l[100];
   printf("Enter a string from a-z: ");
   scanf("%[a-z]", l);
   printf("Entered string is,\n%s", l);
}
