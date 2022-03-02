#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>n;
    vector<ll>v;
    while(n--)
    {
        cin>>a;
        for(i=0; i<a; i++)
        {
            cin>>b;
            v.push_back(b);
        }
        ll ans=0;
        reverse(v.begin(),v.end());
        for(i=0;i<a;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        v.clear();
    }
}