#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll is_p(vector<ll>vv, ll s){

    ll i,j,k,n;

    for(i=0;i<s/2;i++){
        if(vv[i]!=vv[s-i-1]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        cin>>n;
        ll arr[n+2];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<ll>v1,v2;
        for(i=0;i<n/2;i++){
            if(arr[i]!=arr[n-i-1]){
                a=arr[i];
                b=arr[n-i-1];
                break;
            }
        }
        for(i=0;i<n;i++){
            if(arr[i]!=a)v1.push_back(arr[i]);
            if(arr[i]!=b)v2.push_back(arr[i]);
        }
        ll x1=is_p(v1,v1.size());
        ll x2=is_p(v2,v2.size());
        if(x1 || x2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}