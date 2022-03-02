#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,a,b,c,d;
    scanf("%d",&n);
    for(i=0; ;i++)
    {
        n+=1;
        a=n/1000;
        b=(n/100)%10;
        c=(n/10)%10;
        d=n%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            x=n;
            break;
        }
    }
    printf("%d\n",x);
    return 0;
}