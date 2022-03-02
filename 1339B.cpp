#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,t,n,m,a,b;
    cin>>t;
    while(t--){
        vector<ll>v,v1;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a;
            v1.push_back(a);
        }
        sort(v1.begin(),v1.end());
        for(i=0;i<n/2;i++){
            v.push_back(v1[i]);
            v.push_back(v1[n-i-1]);
        }
        if(n&1)v.push_back(v1[n/2]);
        for(i=n-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v1.clear();
        v.clear();
    }
}