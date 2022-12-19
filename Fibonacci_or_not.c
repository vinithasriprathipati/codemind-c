#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i,s;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(a==n)
        {
            printf("True");
            s=1;
            break;
        }
        c=a+b;
        a=b;
        b=c;
    }
    if(s!=1)
    printf("False");
}