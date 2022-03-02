#include<stdio.h>
int main()
{
    int a,x,b,sum;
    scanf("%d%d",&a,&b);
    if((1<=a && a<=1000) && (2<=b && b<=1000))
    {
        x=(a*b)-1;
        sum=x/(b-1);
        printf("%d\n",sum);
    }
    return 0;
}