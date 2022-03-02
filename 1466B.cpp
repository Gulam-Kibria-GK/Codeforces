#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
	ll t;
	cin>>t;
	while(t--){
        ll n,c=0,m;
        cin>>n;m=n;
        ll a[n+5];
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second>1){
                mp[it->first+1]++;
            }
        }
        cout<<mp.size()<<endl;
    }
}