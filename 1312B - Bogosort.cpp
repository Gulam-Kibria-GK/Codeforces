#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a=0,b=0,ans=0;
    cin>>k;
    while(k--){
        cin>>n;
        vector<ll>v;
        for(i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.rbegin(),v.rend());
        for(i=0;i<n;i++){
            cout<<v[i]<<" ";

        }
        cout<<endl;
        v.clear();
    }
}
