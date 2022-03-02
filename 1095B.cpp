#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
int main(){
    ll i,j,k,l,n,m,a,b;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll f=(v[n-1]-v[1]);
    cout<<min(f,v[n-2]-v[0])<<endl;
    return 0;

}