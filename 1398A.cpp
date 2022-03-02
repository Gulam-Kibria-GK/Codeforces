#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll i,j,k,n,m,a;
    cin>>k;
    while(k--){
        cin>>n;
        vector<ll>v;
        for(i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        ll ans=v[0]+v[1],idx=-1;
        for(i=2;i<n;i++){
            if(ans<=v[i]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            cout<<idx<<endl;
        }
        else{
            cout<<1<<" "<<2<<" "<<idx+1<<endl;
        }
        v.clear();
    }
}