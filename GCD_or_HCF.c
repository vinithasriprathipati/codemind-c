#include<stdio.h>
int main()
{
    int a,b,min;
    scanf("%d%d",&a,&b);
    min=(a>b)?a:b;
    for(min;min>0;min--)
    {
        if(a%min==0 && b%min==0)
        {
            printf("%d",min);
            break;
        }
    }
}