#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n==i*i)
        {
        a=1;
        break;
        }
    }
    if(a==1)
    printf("True");
    else
    printf("False");
}