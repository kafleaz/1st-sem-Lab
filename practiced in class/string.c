#include <stdio.h>
#include <string.h>
int find (char str[50], char test, int n)
{
    int n,test;
    if (n!=0)
    {
        if (str[n]==test)
            return 1;
        else 
            return(str,test,n-1);
    }
    else
        return 0;
}
int main()
{
    char str[50],ch ;
    printf("Enter string:\t");
    printf("Enter character: \t"); 
    scanf("%s %c", & str,&ch);
    int return-value=find(str,ch, strlen(str));
    if (return-value == 0)
    {
        printf("%c is not present in %s", ch, str);
    }
    else
    {
         printf("%c is present in %s", ch, str);
    }
}