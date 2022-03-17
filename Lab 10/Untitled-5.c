#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fptr;
	char ch;
	fptr=fopen("get_char.txt","a");
	fptr=fopen("get_char.txt","w");
	printf("Input lines Or press EOF(CTRL+Z)\n");
	while((ch = getchar())!=EOF)
	{
		putc(ch,fptr);		
	}
	fclose(fptr);
	fptr=fopen("get_char.txt","r");
	printf("Output\n");
	while(1)
	{
		ch=getc(fptr);
		printf("%c",ch);
		if(ch==EOF)
		{
			break;
		}	
	}
	fclose(fptr);
}