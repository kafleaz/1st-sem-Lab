/*Write a program to CREATE and WRITE n numbers in a file “NUMBER.TXT”.
Open this file then read  its content and put all even numbers in one file
“EVEN.TXT” and odd numbers in another file “ODD.TXT”.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *mainf, *oddf, *evenf;
	int num=1;
	mainf=fopen("main.txt","w");
	printf("Enter integer numbers and press 0 to terminate input.\n");
	while(num!=0)
	{
		scanf("%d",&num);
		putw(num,mainf);
	}	
	fclose(mainf);
	mainf=fopen("main.txt","r");
	oddf=fopen("odd.txt","w");
	evenf=fopen("even.txt","w");
	while((num=getw(mainf))!=0)
	{
		if((num%2)==0)
		{
			putw(num,evenf);
		}
		else
		{
			putw(num,oddf);
		}
	}
	fclose(mainf);
	fclose(oddf);
	fclose(evenf);
	printf("\nOpening Odd file...\n");
	oddf=fopen("odd.txt","r");
	while((num=getw(oddf))!=EOF)
	{
		printf("%d ",num);
	}
	printf("\nClosing Odd file...\n");
	fclose(oddf);
	printf("\nOpening Even file...\n");
	evenf=fopen("even.txt","r");
	while((num=getw(evenf))!=EOF)
	{
		printf("%d ",num);
	}
	fclose(evenf);
	printf("\nClosing Even file...\n");
}