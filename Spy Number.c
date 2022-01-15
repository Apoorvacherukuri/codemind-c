#include<stdio.h>
int main()
{
    int a,sum=0,product=1;
    scanf("%d",&a);
    while(a>0)
    {   
        sum+=a%10;
        product*=a%10;
        a/=10;
        
    }
    if(product==sum)
    {
    printf("Spy Number");
    }
    else
    {
    printf("Not Spy Number");
    }
    return 0;
    
    
    
    

}


