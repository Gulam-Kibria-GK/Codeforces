#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,a,ma=0,m=0,ans=0;
    cin>>n;
    vector<ll>v;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        ma=max(ma,a);
    }
    for(i=0;i<n;i++)
    {
        if(ma==v[i])m++;
        else ans=max(ans,m),m=0;
    }
    ans=max(ans,m);
    cout<<ans<<endl;
}