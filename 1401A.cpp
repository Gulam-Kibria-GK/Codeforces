#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>a;
    while(a--){
        cin>>n>>m;
        if(n<=m){
            cout<<m-n<<endl;
        }
        else{
            ll ans=n-m;
            if(ans%2)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
    }
}