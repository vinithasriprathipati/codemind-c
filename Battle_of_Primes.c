#include<stdio.h>
int main()
{
    int a,b,i,j,count;
    scanf("%d%d",&a,&b);
    for(i=1;i>0;i++)
    {
        count=0;
        for(j=1;j<=a+b+i;j++)
        {
            if((a+b+i)%j==0)
            count++;
        }
        if(count==2)
        break;
    }
    printf("%d",i);
}