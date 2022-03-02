#include<stdio.h>
int main()
{
    int i,n,a,b,c,sum1=0,sum2=0,sum3=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        sum1=sum1+a;
        sum2=sum2+b;
        sum3=sum3+c;
    }
    if(sum1==0 && sum2==0 && sum3==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}