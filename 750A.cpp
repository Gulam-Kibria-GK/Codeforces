#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,x,valu=-1,j=0;;
    scanf("%d%d",&a,&b);
    x=240-b;
    for(i=0;i<=x;i+=(5*j))
    {
        j++;
        valu+=1;

        // printf("%d\t%d\n",i,valu);

    }

    if(valu==-1)
    {
        valu=0;
        printf("%d\n",valu);
    }
    else
    {
    if(a>=valu)
    {
         printf("%d\n",valu);
    }
    else
    {
        printf("%d\n",a);
    }
    }
    return 0;
}