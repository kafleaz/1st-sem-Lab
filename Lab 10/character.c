#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("character.txt","w");
    printf("Enter lines and press (CTRL+Z)\n");
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