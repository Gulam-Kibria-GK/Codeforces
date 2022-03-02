#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll i,j,k,n,m,t,cur=0;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        cin>>k;
        cout<<(cur+k)/m<<' ';
        cur=(cur+k)%m;
    }
    return 0;
}