#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,t,j,l,n,m,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll mi=9999999999,ma=0;
        for(i=0;i<n;i++){
            cin>>a>>b;
            ma=max(ma,a);
            mi=min(mi,b);
        }
        ll k=0;
        ll ans=max(k,(ma-mi));
        cout<<ans<<endl;
    }
}