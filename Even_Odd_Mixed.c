#include<stdio.h>
int main()
{
    int n,i,ev=0,od=0,b;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        if(b%2==0)
        ev++;
        else if(b%2==1)
        od++;
    }
    if(ev!=0 && od!=0)
    printf("Mixed");
    else if(ev!=0 && od==0)
    printf("Even");
    else
    printf("Odd");
}
