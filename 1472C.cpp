#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t;
	cin>>t;
	while(t--){
        ll n,m,c=0;
        vector<ll>v,v2;
        cin>>n;
        ll a[n+5];
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        map<ll,ll>b;
        map<ll,ll>::iterator it;
        for(ll i=1;i<=n;i++){
            if(a[i]+i<=n){
                b[a[i]+i]=max(b[a[i]+i],b[i]+a[i]);
            }else{
                b[i]+=a[i];
            }
        }
        ll mx=0;
        for( it=b.begin();it!=b.end();it++){
            mx=max(mx,it->second);
        }cout<<mx<<endl;
    }
}