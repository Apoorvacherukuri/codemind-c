#include<stdio.h>
int main()
{
    int product=1,sum=0,i,n;
    scanf("%d",&n);
    while(n>0)
    {
        product*=(n%10);
        sum+=(n%10);
        n/=10;
    }
    i=product-sum;
    printf("%d",i);
    return 0;
}