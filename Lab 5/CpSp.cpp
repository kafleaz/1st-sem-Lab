#include<stdio.h>
int main()
{
    int cp,sp,tl,tp;
    printf("Enter the Cost price:Rs.");
    scanf("%d",&cp);
    printf("Enter the Selling price:Rs.");
    scanf("%d",&sp);

    if(sp>cp)
    {
       tp=sp-cp;
       printf("The profit is:Rs.%d",tp);
    }
    else if (sp<cp)
    {
        tl=cp-sp;
       printf("The loss is:Rs.%d",tl);
    }
    else
    printf("There is neither profit nor loss");
}
