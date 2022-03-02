#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,ma;
    cin>>k;
    while(k--){
        cin>>n;
        cin>>ma;
        ll ans=ma;
        for(i=1;i<n;i++){
            cin>>ma;
            ans&=ma;
        }
        cout<<ans<<endl;
    }
}