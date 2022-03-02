#include<stdio.h>
int main()
{
    int n,m,k,a,b,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&m,&k);
        a = n/k ;
        if(a>=m)printf("%d\n",m);
        else
        {
            b = (m-a)/(k-1) ;
            if((m-a)%(k-1) !=0)b++;
            printf("%d\n",a-b);
        }
    }
}