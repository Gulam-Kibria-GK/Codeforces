#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;

    while(t--){
        ll n,m ,r,c;

        cin>>n>>m>>r>>c;

        ll d1= abs(1-r)+abs(1-c);
        ll d2= abs(1-r)+abs(m-c);
        ll d3= abs(n-r)+abs(1-c);
        ll d4= abs(n-r)+abs(m-c);

        ll ans=max(d1,max(d2,max(d3,d4)));
        cout<<ans<<endl;
    }
}