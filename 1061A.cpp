#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,n,m,a;
    cin>>n>>m;
    a=m/n;
    if(m%n!=0)a++;
    cout<<a<<endl;
    return 0;
}