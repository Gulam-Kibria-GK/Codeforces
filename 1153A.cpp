#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>n>>m;
    vector<pair<ll,pair<ll,ll> > >v;
    for(i=0;i<n;i++){
        cin>>a>>b;
        v.push_back({i+1,{a,b}});
       // cout<<v[i].first<<endl;
    }
    ll kk=INT_MAX,ans2;
    for(i=0;i<n;i++){
        ll ans=0,value=0;
        if(m>v[i].second.first){
            value=v[i].second.first;
            ll x=m-v[i].second.first;
            ll xx=x/v[i].second.second;
            if(x%v[i].second.second)xx++;
            ans+=xx;
            value+=(ans*v[i].second.second);
            //cout<<value<<endl;
            if(value<kk){
                kk=value;
                ans2=v[i].first;
            }
        }
        else{
            if(kk>v[i].second.first){
                kk=v[i].second.first;
                ans2=v[i].first;
            }
        }
    }
    cout<<ans2<<endl;
}