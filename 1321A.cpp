#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m;
    cin>>n;
    vector<ll>v,v1;
    for(i=0;i<n;i++){
        cin>>m;
        v.push_back(m);
    }for(i=0;i<n;i++){
        cin>>m;
        v1.push_back(m);
    }
    ll f=0;
    j=0;
    for(i=0;i<n;i++){
        if(v[i]>v1[i])f++;
        if(v[i]<v1[i])j++;
    }
    if(f==0){
        cout<<-1<<endl;
        return 0;
    }
    ll ans=j/f;
    ans++;
    cout<<ans<<endl;
}