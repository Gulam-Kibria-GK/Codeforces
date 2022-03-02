#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main()
{
    ll i,j,k,n,m,a,b,x,y;
    cin>>a;
    while(a--){
        cin>>x>>y>>n;
        ll ans=n%x;
        if(ans>=y){
            ll sub=abs(ans-y);
            cout<<n-sub<<endl;
        }
        else{
            ll dev=n/x;
            n=dev*x;
            ll sub=(x-y);
            cout<<n-sub<<endl;
        }
    }
}