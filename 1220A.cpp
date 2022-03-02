#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll z,e,r,o,n;
int main()
{
    ll i,j,k,l,m,a;
    cin>>a;
    string st;
    cin>>st;
    for(i=0;i<a;i++){
        if(st[i]=='o')o++;
        if(st[i]=='n')n++;
        if(st[i]=='e')e++;
        if(st[i]=='z')z++;
        if(st[i]=='r')r++;
    }
    m=min(o,min(n,e));
    while(m--){
        cout<<1<<" ";
    }
    o-=m;n-=m;e-=m;
    m=min(o,min(z,min(e,r)));
    while(m--){
        cout<<0<<" ";
    }
}