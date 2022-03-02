#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,ans;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        if((((i*(i+1))/2)-(n-i))==m)
        {
            ans=n-i;
            break;
        }
    }
    cout<<ans<<endl;
}