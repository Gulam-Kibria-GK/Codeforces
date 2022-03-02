#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    vector<ll>v;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    for(i=0;i<n;i++){
        v.push_back(v[i]);
    }
    ll c=0,ma=0;
    for(i=0;i<2*n;i++){
        if(v[i]==1)c++;
        else{
            ma=max(ma,c);
            c=0;
        }
    }
    cout<<ma<<endl;
}