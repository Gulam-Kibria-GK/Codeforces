#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        cin>>n>>m;
        if(n>m){
            ll ans=n/m;
            if(n%m!=0)ans++;
            ans*=m;
            //cout<<ans<<endl;
            ll ans2=ans/n;
            //cout<<ans2<<endl;
            if(ans%n!=0)ans2++;
            cout<<ans2<<endl;
        }
        else{
            ll ans=m/n;
            if(m%n!=0)ans++;
            cout<<ans<<endl;
        }
    }
}