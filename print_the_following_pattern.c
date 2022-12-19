#include<stdio.h>
int main()
{
    int n,i,j,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n;j>i+1;j--)
        {
            printf(" ");
        }
        for(z=1;z<=2*i+1;z++)
        printf("%d",i+1);
        printf("
");
    }
}