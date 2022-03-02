#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b=0;
    cin>>k;
    while(k--){
        cin>>n>>m;
        b=0;
        for(i=0;i<n;i++){
            cin>>a;
            b+=a;
        }
        cout<<(min(b,m))<<endl;
    }
}