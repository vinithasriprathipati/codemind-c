#include<stdio.h>
int main()
{
    int n,arr[100],i,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d %d
",i,arr[i]);
        if(arr[i]%2==0)
        s=1;
        else
        {
            s=0;
            break;
        }
    }
    if(s==1)
    printf("True");
    else
    printf("False");
}

