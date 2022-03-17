#include<stdio.h>
int main(){
    int a, b;
    char c;
    printf("Enter the operator '>, <, =':");
    scanf("%c",&c);
    printf("Enter any two number ");
    scanf("%d %d",&a,&b);
    if (c='>')
    {
        printf("%d is greater than %d",a,b);
    }
    else if (c='<')
    {
        printf("%d is greater than %d",a,b);
    }
    else
    {
        printf("%d is equal %d",a,b);
    }
    
    return 0;
}
