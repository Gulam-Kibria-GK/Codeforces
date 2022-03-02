#include<bits/stdc++.h>
using namespace std;

#define ll long long
 map<ll,ll>mm;
int main(){
    ll i,j,k,l,n,m;
    cin>>k;
    while(k--){
        cin>>n;
        vector<ll>v;
        for(i=0;i<n;i++){
            cin>>m;
            if(mm[m]==0){
                v.push_back(m);
                mm[m]=1;
            }
        }
        cout<<v.size()<<endl;
        mm.clear();
        v.clear();
    }
}