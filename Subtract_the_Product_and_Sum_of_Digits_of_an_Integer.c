#include<stdio.h>
int main()
{
    int n,d,sum=0,mult=1,res;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum+=d;
        mult*=d;
        n=n/10;
    }
    res=mult-sum;
    printf("%d",res);
    return 0;
    }