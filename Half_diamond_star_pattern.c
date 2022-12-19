#include<stdio.h>
int main()
{
    int a,i,j,x,y;
    scanf("%d",&a);
    if(a>=3 && a<=100)
    {
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("
");
        }
        for(x=a-1;x>=1;x--)
        {
            for(y=1;y<=x;y++)
            {
                printf("*");
            }
            printf("
");
        }
    }
    else
    {
        printf("The pattern is not possible");
    }
}