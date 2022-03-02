#include<stdio.h>
int main()
{
    int i,n,x;
    scanf("%d%d",&n,&x);
    for(i=1; i<=n; i++)
    {
        x=x-i;
        if(x<0)
        {
            printf("%d\n",x+i);
            break;
        }
        else if(n==i)
        {
            i=0;
        }
    }
    return 0;
}