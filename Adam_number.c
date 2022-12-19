#include<stdio.h>
int main()
{
    int n,s=0,a,i,b,pro;
    scanf("%d",&n);
    a=n*n;
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        s=s*10+b;
    }
    pro=s*s;
    s=0;
    for(i=pro;i>0;i=i/10)
    {
        b=i%10;
        s=s*10+b;
    }
    if(s==a)
    printf("True");
    else
    printf("False");
}

