#include<stdio.h>
int main()
{
    int i,a,b,c=0,d=0,e=0,sum,sum2,x=1,n;
    scanf("%d%d",&a,&b);
    sum=a+b;
    while(sum)
    {
        n=sum%10;
        if(n!=0)
        {
            d=d+(n*x);
            x=x*10;
        }
        sum=sum/10;
    }
    //printf("%d  %d  %d\n\n\n",d,x,n);
    x=1;
    n=0;
    while(a)
    {
        n=a%10;
        if(n!=0)
        {
            c=c+(n*x);
            x=x*10;
        }
        a=a/10;
    }
    //printf("%d  %d  %d\n\n\n",c,x,n);
    x=1;
    n=0;
    while(b)
    {
        n=b%10;
        if(n!=0)
        {
            e=e+(n*x);
            x=x*10;
        }
        b=b/10;
    }
    sum2=e+c;
    //printf("%d  %d  %d\n\n\n",e,x,sum2);
    if(sum2==d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}