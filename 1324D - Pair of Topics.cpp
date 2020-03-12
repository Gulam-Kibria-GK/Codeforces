#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    vector<ll>v,v3,v2;
    ll c=0,f=0;
    for(i=0;i<n;i++){
        cin>>a;
        v3.push_back(a);
    }
    for(i=0;i<n;i++){
        cin>>a;;
        v2.push_back(a);
    }
    for(i=0;i<n;i++){
        v.push_back(v3[i]-v2[i]);
         if(v3[i]-v2[i]<=0)f++;
    }
    c=((n-f)*((n-f)-1))/2;
    sort(v.begin(),v.end());
    for(i=0;i<f;i++){
        ll x=(-1*v[i]);
        ll idx1=upper_bound(v.begin(),v.end(),x)-v.begin();
        c+=(n-idx1);
    }
    cout<<c<<endl;
}
