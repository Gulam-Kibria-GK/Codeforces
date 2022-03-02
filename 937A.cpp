#include<bits/stdc++.h>
#define sc scanf
#define pf printf
#define ll long long
#define dl double
using namespace std;
vector<ll>v;
int main()
{
    ll t;
    cin>>t;
    ll arr[t+1];
    for(ll i=0; i<t; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+t);
    ll x=1;
    for(ll i=0; i<t-1; i++)
    {
        if(arr[i]!=0)
        {
            if(arr[i]!=arr[i+1])
            {
                x++;
            }
        }
    }
    cout<<x<<endl;
}