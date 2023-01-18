#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,min,max,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c<n)
        min=c;
        else
        {
            max=c;
            break;
        }
    }
    if(max-n>n-min)
    printf("%d",min);
    else if(max-n<n-min)
    printf("%d",max);
    else
    printf("%d %d",min,max);
}
