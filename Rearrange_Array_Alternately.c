#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&k);
    for(t=1;t<=k;t++)
    {
        int n;
        scanf("%d",&n);
        int a[100],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        
        for(i=0;i<n;i++)
        {
            if(i<n-i-1)
            {
            if(i<n-i-2)
            printf("%d %d ",a[n-i-1],a[i]);
            else
            printf("%d %d",a[n-i-1],a[i]);
            }
            
        }
        if(n%2==1)
        {
            printf("%d",a[n/2]);
        }
        printf("
");
    }
}