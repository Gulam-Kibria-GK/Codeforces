#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>a;
    while(a--){
        cin>>n;
        vector<ll>v;
        for(i=0;i<n;i++){
            cin>>b;
            v.push_back(b);
        }
        for(i=0;i<n/2;i++){
            cout<<v[i]<<" "<<v[n-i-1]<<" ";
        }
        if(n%2!=0)cout<<v[n/2]<<endl;
        v.clear();
    }
}