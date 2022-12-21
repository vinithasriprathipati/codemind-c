#include<stdio.h>
int main()
{
    int n,arr[100],i,s=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=sum/n)
        s++;
    }
    printf("%d",s);
}

