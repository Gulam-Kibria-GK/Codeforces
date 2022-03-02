#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b,c,d;
    cin>>a>>b>>c>>d>>n>>m;
    ll ans;
    if(m>n)
    {
        ans=0;
        ll ff=(min(min(b,c),d));
        ans+=ff*m;
        d-=ff;
        if(d>0)
        {
            ans+=(min(d,a))*n;
        }
    }
    else
    {
        ans=0;
        ll ff1=(min(d,a));
        ans+=ff1*n;
        d-=ff1;
        if(d>0)
        {
            ans+=(min(min(b,c),d))*m;
        }
    }
    cout<<ans<<endl;
}