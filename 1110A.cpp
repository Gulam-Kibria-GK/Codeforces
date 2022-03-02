#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a,b,sum,c=0;
    cin>>n>>m;k=m;
    vector<ll>v;
    for(i=1;i<=m;i++){
        cin>>a;
        if(k!=i){
            c+=(n*a);
        }
        else {
            c+=a;
        }
    }
    if(c%2)cout<<"odd"<<endl;
    else cout<<"even"<<endl;
}