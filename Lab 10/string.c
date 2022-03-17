/*Write a program to write and read string in a file.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char str[50];
	fp=fopen("string.txt","w");
	printf("Input string\n");
	scanf("%s",str);
	fputs(str,fp);
	fclose(fp);
	fp=fopen("string.txt","r");
	fgets(str,50,fp);
	printf("Output!!!\n");
	printf("%s ",str);
}