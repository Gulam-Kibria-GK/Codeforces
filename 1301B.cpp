#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v;
int main()
{
    ll i,j,k;
    cin>>k;
    while(k--){
        ll n,a,f=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        ll mi=INT_MAX,ma=0;
        for(i=0;i<n-1;i++){
            if(v[i]==-1 && v[i+1]!=-1){
                mi=min(mi,v[i+1]);
                ma=max(ma,v[i+1]);
                f=1;
            }
        }
        reverse(v.begin(),v.end());
        for(i=0;i<n-1;i++){
            if(v[i]==-1 && v[i+1]!=-1){
                mi=min(mi,v[i+1]);
                ma=max(ma,v[i+1]);
                f=1;
            }
        }
        ll best=0;
        if(f)
            best=(ma+mi)/2;
        for(i=0;i<n;i++){
            if(v[i]==-1)v[i]=best;
        }
        ll diff=0;
        for(i=0;i<n-1;i++){
            diff=max(diff,abs(v[i]-v[i+1]));
        }
        cout<<diff<<" "<<best<<endl;
        v.clear();
    }
}