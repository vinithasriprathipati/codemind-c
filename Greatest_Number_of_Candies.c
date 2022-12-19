#include<stdio.h>
int main()
{
    int n,arr[100],a,i,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        max=arr[i];
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]+a>=max)
        printf("True ");
        else
        printf("False ");
    }
}