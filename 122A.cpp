#include<stdio.h>
int main()
{
    int i,n,div,div2,x,p=0,q=0;
    scanf("%d",&n);
    x=n;
    while(1)
    {
        div=n%10;
        if(div==4 || div==7)
        {
            p+=1;
        }
        q+=1;
        div2=n/10;
        n=div2;
        if(n==0)
        {
            break;
        }
    }
    if(x%4==0 || x%44==0 || x%444==0 || x%777==0 || x%77==0 || x%7==0 || x%47==0 || x%74==0 || x%447==0 || x%477==0 || x%774==0 || x%744==0 || x%747==0 || x%474==0 || p==q)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}