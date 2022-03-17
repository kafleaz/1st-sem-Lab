/*Write a program to write and read integer in a file.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	int num=1;
	fp=fopen("num.txt","w");
	printf("Enter 0 to exit.\n");
	while(num!=0)
	{
		printf("Number = ");
		scanf("%d",&num);
		putw(num,fp);
	}	
	fclose(fp);
	printf("Output\n");
	fp=fopen("num.txt","r");
	while((num=getw(fp))!=0)
	{
		printf("%d ",num);
	}
	fclose(fp);
}