#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],x,c=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("%d ",i);
            c=1;
            break;
        }
    }
    for(i=n;i>=0;i--)
    {
        if(a[i]==x)
        {
            printf("%d ",i);
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("-1 -1");
    }
}