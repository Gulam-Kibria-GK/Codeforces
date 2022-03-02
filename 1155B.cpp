#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b=0;
    string st;
    cin>>n>>st;
    for(i=0;i<n-10;i++){
        if(st[i]=='8')b++;
    }
    m=n-11;
    k=m/2;
    if(k<b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}