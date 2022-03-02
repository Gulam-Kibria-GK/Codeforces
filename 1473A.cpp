#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        cin>>n>>m;
        vector<ll>v;
        ll f=0;
        for(i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
            if(a<=m)f++;
        }
        sort(v.begin(),v.end());
        if((v[0]+v[1])<=m || f==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}