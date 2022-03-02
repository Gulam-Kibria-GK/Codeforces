#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m;
    cin>>k;
    while(k--){
        cin>>n>>m;
        if(n%m==0)cout<<0<<endl;
        else
            cout<<(m-(n%m))<<endl;

    }
}