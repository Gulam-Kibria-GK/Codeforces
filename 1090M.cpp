#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v;
ll ma;
int main()
{
    ll i,j,k,l,n,m,a,b=1;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    for(i=0;i<n-1;i++){
        if(v[i]!=v[i+1])b++;
        else {ma=max(ma,b);b=1;}
    }
    cout<<max(ma,b)<<endl;
}