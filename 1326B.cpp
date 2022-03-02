#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,ma=0;
    cin>>n;
    vector<ll>a,b,x;
    for(i=0;i<n;i++){
        cin>>k;
        b.push_back(k);
    }
    for(i=0;i<n;i++){
        ll ans=(ma+b[i]);
        cout<<ans<<" ";
        ma=max(ma,ans);
    }
    cout<<endl;
}