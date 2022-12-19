#include<stdio.h>
int fact(int a)
{
    int i,pro=1;
    for(i=a;i>0;i--)
    {
        pro*=i;
    }
    return pro;
}
int main()
{
    int n,rcv,b,i,sum=0;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        rcv=fact(b);
        sum+=rcv;
    }
    if(sum==n)
    printf("The number %d is a strong number",n);
    else
    printf("The number %d is not a strong number",n);
}