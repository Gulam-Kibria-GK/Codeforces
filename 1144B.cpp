#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    vector<ll>v1,v2;
    for(i=0;i<n;i++){
        cin>>a;
        if(a%2)v1.push_back(a);
        else v2.push_back(a);
    }
    if(v1.size()==v2.size()){
        cout<<0<<endl;
        return 0;
    }
    sort(v1.rbegin(),v1.rend());
    sort(v2.rbegin(),v2.rend());
    m=min(v1.size(),v2.size());
    for(i=0;i<m;i++){
        v1[i]=0;
        v2[i]=0;
    }
    if(v1.size()>v2.size()){
        v1[m]=0;
    }
     if(v1.size()<v2.size()){
         v2[m]=0;
     }
     ll ans=0;
     for(i=0;i<v1.size();i++){
        ans+=v1[i];
     }
     for(i=0;i<v2.size();i++){
        ans+=v2[i];
     }
     cout<<ans<<endl;
}