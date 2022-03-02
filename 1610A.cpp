#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b;
    cin>>k;
    while(k--){
        cin>>n>>m;
        if(n==1 && m==1){
            cout<<0<<endl;
        }
        else if(n==1 || m==1){
            cout<<1<<endl;
        }
        else
            cout<<2<<endl;
    }
}