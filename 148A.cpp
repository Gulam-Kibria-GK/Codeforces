#include<stdio.h>
int main()
{
    int i,a,b,c,d,n,valu=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&n);
    for(i=1;i<=n;i++)
    {
        if(i%a==0 || i%b==0 || i%c==0 || i%d==0)
        {
            valu++;
        }
    }
    printf("%d\n",valu);
    return 0;
}