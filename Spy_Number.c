#include<stdio.h>
int main()
{
    int s=0;
    int p=1;
    int d,n;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}