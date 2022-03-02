#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mi=2<<29;

int main()
{
    ll i,j,n,m,a,g=0,ans=0;
    cin>>n>>m;
    vector<ll>v,v1;
    for(i=0; i<n; i++){
        cin>>a;
        v.push_back(a);
        mi=min(mi,v[i]);
    }
    while(g==0 || v.size()!=0){
        ll k,b=0;
        for(i=0; i<v.size(); i++)b+=v[i];
        k=(m/b)*v.size();
        ans+=k;
        m=m%b;
        for(i=0; i<v.size(); i++){
            if(m>=v[i]){
                ans++;
                m-=v[i];
            }
            if(mi>m){
                g=1;
                goto nam;
            }
        }
        for(i=0; i<v.size(); i++){
            if(m>=v[i])
                v1.push_back(v[i]);
        }
        v.clear();
        v.assign(v1.begin(),v1.end());
    }
    nam:
    cout<<ans<<endl;
    return 0;
}