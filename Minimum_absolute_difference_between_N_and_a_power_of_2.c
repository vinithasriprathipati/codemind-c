#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,i,min,max,e,f,ans;
scanf("%d",&a);
for(i=1;i<=a;i++)
{
    c=pow((2),i);
    if(c<a)
    {
        min=c;
    }
    else
    {
        max=c;
        break;
    }
}
    e=a-min;
    f=max-a;
    ans=(e<f)?a-min:max-a;
    printf("%d",ans);
}