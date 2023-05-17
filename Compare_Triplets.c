#include<stdio.h>
int main()
{
    int a[3],b[3],i,count1=0,count2=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        
            if(a[i]<b[i])  
            {
                count1++;
            }
            if(a[i]>b[i]) 
            {
                count2++;
            }
        
    }
    printf("%d %d",count2,count1);
    
}
