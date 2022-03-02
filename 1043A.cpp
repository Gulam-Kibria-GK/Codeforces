#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll ma=0;
int main()
{
    ll i,j,k,l,n,m,a,b=0;
    cin>>n;
    ll arr[n+2];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        b+=arr[i];
        ma=max(ma,arr[i]);
    }
    while(true)
    {
        ll ff=0;
        for(i=0; i<n; i++)
        {
            ff+=(ma-arr[i]);
        }
        if(ff>b){
            cout<<ma<<endl;
            return 0;
        }
        ma++;
    }
}