#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll i,j,k,n,m,w,h,ans=0;
    cin>>w>>h>>k;
    for(i=1;i<=k;i++)ans+=(2*((w-4*(i-1))+(h-4*(i-1)))-4);
    cout<<ans<<endl;
    return 0;
}