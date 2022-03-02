#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,c=0,d;
    cin>>n;
    vector<ll>v;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++){
        if(i==v[i]-1)c++;
    }
    cout<<c<<endl;
}