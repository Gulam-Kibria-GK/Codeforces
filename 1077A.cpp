#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,j,k,l,n,m;
    cin>>n;
    for(i=0;i<n;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        ll aa=c/2+(c&1);
        ll bb=c/2;
        ll ans=aa*a-b*bb;
        cout<<ans<<endl;
    }
}