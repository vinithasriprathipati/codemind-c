#include<stdio.h>
     int large(int k)
     {
         int b,i,s,r,lar;
     for(b=k;b>=0;b++)
     {
         s=0;
         for(i=1;i<=b;i++)
         {
             if(b%i==0)
             {
                 s++;
             }
         }
         if(s==2)
         {
            lar=b;
            break;
           
         }
     }
     return lar;
     }
     int small(int k)
     {
         int b,i,s,r,sma;
     for(b=k;b>=0;b--)
     {
         s=0;
         for(i=1;i<=b;i++)
         {
             if(b%i==0)
             {
                 s++;
             }
         }
         if(s==2)
         {
            sma=b;
            break;
         }
     }
     return sma;
}
int main()
{
    int a,b,c,d,e,f,min,i,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&k);
    b=small(k);
    c=large(k);
    e=k-c;
    f=b-k;
    if(e==f)
    {
        printf("%d
",b);
    }
    else
    {
   min=(e<f)?b:c;
   printf("%d
",min);
    }
    }
}
