#include<stdio.h>
int main()
{
    int n,max=0;
    scanf("%d",&n);
    int a[100],i,j,c=0,x;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if (i!=j)
            {
                if(a[i]==a[j])
                {
                    c+=1;
                }
            }
        }
        if(c>=1)
        {
            if(max<c)
            {
                max=c;
                x=a[i];
            }
        }
    }
    printf("%d",x);
}