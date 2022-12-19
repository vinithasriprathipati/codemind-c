#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=15 && n!=7 && n!=11 && n!=13 && n!=14 && n>=1)
    printf("Ugly Number");
    else
    printf("Not Ugly Number");
}