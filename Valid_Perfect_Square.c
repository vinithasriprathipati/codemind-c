#include<stdio.h>
#include<stdbool.h>
bool sqr(int a)
{
    int i,s;
    for(i=1;i<=a;i++)
    {
        if(i*i==a)
        s=1;
    }
    if(s==1)
    return true;
    else
    return false;
}
int main()
{
     int n,a,i;
     char l;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         scanf("%d",&a);
         l=sqr(a);
         if(l==0)
         printf("False
");
         else
         printf("True
");
     }
}