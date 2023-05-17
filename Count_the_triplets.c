#include<stdio.h>
int main()
{
    int t,k;
    scanf("%d",&k);
    for(t=1;t<=k;t++)
    {
        int n;
        scanf("%d",&n);
        int a[100],i,c=0,j,k,g=0,x;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    x=a[i]+a[j];
                    g=0;
                    for(k=0;k<n;k++)
                    {
                        if(x==a[k])
                        {
                            g+=1;
                        }
                    }
                    if(g>0)
                    {
                        c+=1;
                    }
                }
            }
            
            
        }
        if(c==0)
        {
            printf("-1");
        }
        else{
            printf("%d",c/2);
        }
        printf("
");
    }
}
