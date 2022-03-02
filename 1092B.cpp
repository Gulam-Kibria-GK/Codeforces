#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v;

int main()
{
    ll i,j,k,n,m,a,sum=0,b;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n-1;i+=2){
        sum+=(abs(v[i+1]-v[i]));
    }
    cout<<sum<<endl;
}