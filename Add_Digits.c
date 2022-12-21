#include<stdio.h>
int main()
{
    int n,sum,b,i;
    scanf("%d",&n);
    while(sum>9)
    {
        sum=0;
        for(i=n;i>0;i=i/10)
        {
            b=i%10;
            sum+=b;
        }
        if(sum>9)
        n=sum;
    }
    printf("%d",sum);
}