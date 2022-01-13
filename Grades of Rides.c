#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>50&&b>60&&c>100)
    {
        printf("10
");
    }
    if(a>50&&b>60&&c<=100)
    {
        printf("9
");
    }
    if(a<=50&&b>60&&c>100)
    {
        printf("8
");
    }
    if(a>50&&b<=60&&c>100)
    {
        printf("7
");
    }
    if((a>50&&b<=60&&c<=100)||(a<=50&&b>60&&c<=100)||(a<=50&&b<=60&&c>100))
    {
        printf("6
");
    }
    if(a<=50&&b<=60&&c<=100)
    {
        printf("5
");
    }
    return 0;
    
}