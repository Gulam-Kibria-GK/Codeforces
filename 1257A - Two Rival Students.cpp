#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n>>m>>a;
        ll ans=k-1;
        ll ff=abs(m-a)+n;
        cout<<(min(ans,ff))<<endl;
    }
    return 0;
}
