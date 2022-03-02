#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b;
    cin>>n>>m;
    k=(n*2)/m;
    if((n*2)%m!=0)k++;
    l=(n*5)/m;
    if((n*5)%m!=0)l++;
    a=(n*8)/m;
    if((n*8)%m!=0)a++;
    cout<<k+l+a<<endl;
}