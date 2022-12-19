#include<stdio.h>
int main()
{
    int n,i,b,k=0,e=0,o=0;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        k++;
        if(b%2==0)
        e++;
        else if(b%2!=0)
        o++;
    }
    if(e==k)
    printf("Even");
    else if(o==k)
    printf("Odd");
    else
    printf("Mixed");
}