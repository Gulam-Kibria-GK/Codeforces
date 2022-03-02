#include<stdio.h>
int main()
{
    int i,j,n,a,b,s1,s2,sum;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%d",&n);
            if(n==1)
            {
                a=i;
                b=j;
            }
        }
    }
    if(a<3)
    {
        s1=3-a;
    }
    else
    {
        s1=a-3;
    }
    if(b<3)
    {
        s2=3-b;
    }
    else
    {
        s2=b-3;
    }
    sum=s1+s2;
    printf("%d\n",sum);
}