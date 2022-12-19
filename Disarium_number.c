#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,b,s=0,k=0,sum=0;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        s=s*10+b;
    }
    for(i=s;i>0;i=i/10)
    {
        b=i%10;
        k++;
        sum+=(pow(b,k));
    }
    if(sum==n)
    printf("True");
    else
    printf("False");
}