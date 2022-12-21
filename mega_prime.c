#include<stdio.h>
int main()
{
    int n,i,j,c,co,k,m,b;
    scanf("%d",&n);
    //printf("%d ",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    {
        k=0;
        //co=0;
        m=0;
        for(i=n;i>0;i=i/10)
        {
            k++;
            b=i%10;
            co=0;
            for(j=1;j<=b;j++)
            {
                if(b%j==0)
                co++;
            }
           // printf("%d ",co);
            if(co==2)
            m++;
        }
        //printf("%d %d",m,k);
        if(m==k)
        printf("Mega Prime");
        else
        printf("Not Mega Prime");
    }
    else
    printf("Not Mega Prime");
}
