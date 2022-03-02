#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a=1,b,ma=0,c=0,x=1,x2=0,d=0,jj=0;
    string st;
    cin>>n>>st;
    vector<ll>v;
    if(st[n-1]=='G')n++,st+='S';
    for(i=0; i<n; i++){
        if(st[i]=='G')c++;
        else{
            v.push_back(c),c=0;}
    }
    ll u=v.size();
    if(u==1)ma=v[u-1];
    else{
        for(i=0; i<u-1; i++)
            ma=max(ma,(v[i]+v[i+1]));
        for(i=0; i<n; i++)
            if(st[i]=='G')d++;
        if(d>ma)ma++;
    }
    cout<<ma<<endl;
}