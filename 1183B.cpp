#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,t,m;
    cin>>t;
    for(l=0; l<t; l++)
    {
        ll ma=0;
        cin>>n>>k;
        ll arr[n+2];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            ma=max(arr[i],ma);
        }
        sort(arr,arr+n);
        ll ans=arr[0]+k;
        if(ma-ans<=k)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}