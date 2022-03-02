#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m;
    vector<ll>v;
    cin>>n;
    m=n;
    for(i=9;i>=1;i--){
        if(n>=i){
            n=n%i;
            for(j=0;j<m/i;j++){
                v.push_back(i);
            }
            m=n;
        }
    }
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}