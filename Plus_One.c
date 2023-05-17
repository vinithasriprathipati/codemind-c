#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[1000],i,sum=0,temp,r,rev=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum*10+a[i];
    }
    int b[100],k=0;
    sum=sum+1;
    temp=sum;
    while(temp)
    {
        r=temp%10;
        b[k++]=r;
        temp/=10;
    }
    for(i=k-1;i>=0;i--)
    {
        printf("%d ",b[i]);
    }
}