#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b,ans;
    cin>>n>>a>>b>>k;
    if(n==b){
        a+=k;
        ans=n*2+a*2+4;
    }
    else
    {
        ans=(n*2)+(a*2)+3-b;
        ans+=((b*1)+(k*2)+1);
    }
    cout<<ans<<endl;
}