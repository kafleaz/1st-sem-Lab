#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("character.txt","w");
    while((ch=getchar()) != EOF)
    {
        fputc(ch,fp);
    }
    fclose(fp);
    fp = fopen("character.txt","r");
    while((ch=getc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
}