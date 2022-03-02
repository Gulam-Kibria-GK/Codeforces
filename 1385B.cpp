#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m;
    cin>>k;
    while(k--){
        ll a,b,c,f=0;
        vector<ll>v;
        map<ll,ll>mm;
        cin>>a;
        for(i=0;i<a*2;i++){
            cin>>b;
            mm[b]=1;
            v.push_back(b);
        }
        for(i=0;i<a*2;i++){
            if(mm[v[i]]==1){
                mm[v[i]]=0;
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
        v.clear();
        mm.clear();
    }

}