#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m;
    cin>>k;
    while(k--){
        cin>>n>>m;
        ll nn=min(n,m);
        ll mm=max(n,m);

        if(mm>=nn*3){
            cout<<nn<<endl;
        }
        else{
            ll a=mm-nn;
            ll b=a/2;
            ll ans=b;
            mm-=(b*3);
            nn-=(b*1);
            ans+=((mm+nn)/4);
            cout<<ans<<endl;
        }
    }
}