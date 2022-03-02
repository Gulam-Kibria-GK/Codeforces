#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,a,m,b;
    cin>>n;
    while(n--){
        //vector<ll>v;
        cin>>a>>b;
        ll ans=abs(a-b);
        ll aa=ans/10;
        if(ans%10)aa++;
        cout<<aa<<endl;

    }
}