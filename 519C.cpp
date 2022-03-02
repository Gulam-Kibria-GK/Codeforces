#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,x,y,c=0,d;
    cin>>n>>m;
    while(1)
    {
        if(((n+m)<3) || n==0 || m==0)
        break;
        if(n<=m)
        {
            n=n-1;
            m=m-2;
        }
        else
        {
            n=n-2;
            m=m-1;
        }
        c++;
    }
    cout<<c<<endl;
    return 0;
}