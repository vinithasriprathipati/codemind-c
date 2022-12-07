#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float sq,sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sq=sqrt(i);
        sum=sum+sq;
    }
    printf("%0.2f",sum);
}