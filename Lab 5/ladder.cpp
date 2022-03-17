 #include<stdio.h>
int main()
{
    int r, s, a;
    printf("Enter the age of Ram, Shyam and Ajay:\n");
    scanf("%d %d %d",&r,&s,&a);
    if (r<s && r<a)
    	printf("Ram is the youngest");
	else if (s<r && s<a)
		printf("Shyam is the youngest");		
	else
		printf("Ajay is the youngest");
	return 0;
}
