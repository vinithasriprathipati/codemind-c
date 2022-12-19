#include<stdio.h>
int primecheck(int i)
{
    int j,count=0,b;
    for(j=1;j<=i;j++)
    {
        b=i%j;
        if(b==0)
        {
            count++;
        }
    }
    if(count==2)
        return 1;
        else
        return 2;
}
int main()
{
    int n,count=0,i,b,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        b=n%i;
        if(b==0)
        {
            l=primecheck(i);
            if(l==2)
            count++;
        }
    }
    printf("%d",count);
}