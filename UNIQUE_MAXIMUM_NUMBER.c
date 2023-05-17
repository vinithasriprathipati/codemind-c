#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[100],c=0,max=0,j,x=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if (a[i]==a[j])
                {
                    c+=1;
                }
            }
        }
        if(c==0)
        {

            if(max<a[i])
            {
                max=a[i];
                x=1;
            }
        }
    }
    if(x==0)
    {
        printf("-1");
    }
    else
    {
    printf("%d",max);
    }
}
