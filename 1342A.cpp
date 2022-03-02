#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,t,n,m,a,b;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cin>>a>>b;
        ll dif=abs(n-m);
        ll value=min(n,m);
        ll ans=dif*a;
        ll k=min((a*2),b);
        ans+=(value*k);
        cout<<ans<<endl;
    }
}