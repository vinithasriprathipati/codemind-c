#include<stdio.h>
int main()
{
    int a,b,s,c,i,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        s=0;
        for(j=i;j>0;j=j/10)
        {
            c=j%10;
            s=s*10+c;
        }
        if(s==i)
        printf("%d ",i);
        }
} 