#include <stdio.h>

int main() 
{
	int n;
    
	printf("Enter a number: ");
	scanf("%d", &n);

	if (n < 100) 
    {
		printf("Number is less than 100.\n");
	}  
    else 
    {
		printf("Number is not less than 100.\n");
	}
}

