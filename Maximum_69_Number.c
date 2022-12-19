#include<stdio.h>
int main()
{
    int n,arr[100],b,i=0,j,k;
    scanf("%d",&n);
    for(k=n;k>0;k=k/10)
    {
        b=k%10;
        arr[i]=b;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        if(arr[j]==6)
        {
            arr[j]=9;
            break;
        }
    }
    for(j=i-1;j>=0;j--)
    {
    printf("%d",arr[j]);
    }
}