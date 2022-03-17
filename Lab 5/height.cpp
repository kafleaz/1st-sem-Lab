#include<stdio.h>
int main()
{
    int n, h, w, c=0;
    printf("Enter the total number students: ");
    scanf("%d",&n);
    printf("Enter the height in cm and weight in kg: ");
    for (int i = 1;i <= n; i++)
    {
        scanf("%d %d",&h,&w);
            if (h >170 && w < 50)
            {
                c++;
            }
    }
    printf("The student with weight less than 50kg and height greater than 170 cm are %d",c);

    return 0;
}
