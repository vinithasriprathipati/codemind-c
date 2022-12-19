#include<stdio.h>
int main()
{
    int n,i,j,b,count=0,a,c,k;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d%d",&a,&c);
        count=0;
        for(i=a;i<=c;i++)
        {
            for(j=i;j>0;j=j/10)
            {
                b=j%10;
                if(b==2 || b==3 || b==9)
                {
                   count++;
                   break;
                }
                else
                break;
            }
        }
        printf("%d
",count);
    }
}