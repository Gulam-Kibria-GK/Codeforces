#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<pair<ll,pair<ll,ll> > >v;
ll dis(ll sx,ll sy,ll xi,ll yi){
    ll ans=abs(sx-xi)+abs(sy-yi);
    return ans;
}
ll n;
ll check(ll a,ll b){
    ll c=0;
    for(int i=0;i<n;i++){
        ll kk=dis(a,b,v[i].second.first,v[i].second.second);
        if(kk<v[i].first)c++;
    }
    return c;
}

int main()
{
    ll i,j,k,m,a,b;
    ll c=0,c1=0;
    cin>>n>>a>>b;
    ll x,y;
    for(i=0;i<n;i++){
        cin>>x>>y;
        ll ar=dis(a,b,x,y);
        v.push_back({ar,{x,y}});
    }
    ll ma=0,aa,bb;
    ll hh=check(a-1,b);
    if(ma<=hh){
        ma=hh;
        aa=a-1;
        bb=b;
    }
    hh=check(a+1,b);
    if(ma<=hh){
        ma=hh;
        aa=a+1;
        bb=b;
    }
    hh=check(a,b+1);
    if(ma<=hh){
        ma=hh;
        aa=a;
        bb=b+1;
    }
    hh=check(a,b-1);
    if(ma<=hh){
        ma=hh;
        aa=a;
        bb=b-1;
    }
    cout<<ma<<endl;
    cout<<aa<<" "<<bb<<endl;
}
