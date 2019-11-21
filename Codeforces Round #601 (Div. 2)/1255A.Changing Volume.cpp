#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        ll ans=abs(a-b);
        ll c=0;
        c+=(ans/5);
        ans=ans%5;
        c+=(ans/2);
        ans=ans%2;
        c+=ans;
        cout<<c<<endl;
    }

}
