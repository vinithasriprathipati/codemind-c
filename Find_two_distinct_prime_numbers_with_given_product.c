#include<stdio.h>
int main()
{
    int n,i,j,z,c,co,a,s;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==2)
        {
            for(z=1;z<n;z++)
            {
                co=0;
                for(a=1;a<=n;a++)
                {
                    if(z%a==0)
                    co++;
                }
                if(co==2)
                {
                    if(i*z==n)
                    {
                        printf("%d %d",i,z);
                        s=0;
                        break;
                    }
                }
                if(s==0)
                break;
            }
        }
        if(s==0)
        break;
    }
    if(s!=0)
    printf("-1");
}

