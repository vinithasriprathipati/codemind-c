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
        if(arr[i]!=0 && arr[i]!=1){
        s=1;
        break;}
    }
    if(s==1)
    printf("False");
    else
    printf("True");
}