#include<stdio.h>
int main()
{
    int i,n,h,div,valu;
    scanf("%d",&n);
    valu=n%2;
    div=n/2;
    if(valu==0)
    {
        i=div-1;
        if(i%2==0)
        {
            i=i-1;
        }
        printf("%d %d\n",i,n-i);
    }
    else
    {
        i=div;
        printf("%d %d\n",i,i+1);
    }

    return 0;
}