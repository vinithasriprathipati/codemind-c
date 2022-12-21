#include<stdio.h>
int main()
{
    int n,i,j,plus,minus,count;
    scanf("%d",&n);
    //printf("%d ",n);
    for(i=n;i>0;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        {
            plus=i;
            break;
        }
    }
    //printf("%d ",plus);
    if(plus==n)
    printf("0");
    else{
    for(i=n-1;i>0;i--)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        {
            minus=i;
            break;
        }
    }
   // printf("%d ",minus);
    if(plus-n>n-minus)
    printf("%d",n-minus);
    else if(plus-n<n-minus)
    printf("%d",plus-n);
    else if(plus-n==n-minus)
    printf("%d",n-minus);
    }
}