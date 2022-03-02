#include<bits/stdc++.h>
#define ll long long
#define sc scanf
#define pf printf

using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n+1];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ll w=0,b=0,x=0;
    ll num[n];
    for(ll i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            w++;
            if(b>0){
                num[x]=b;
                b=0;
                x++;
            }

        }
        if(arr[i]==1)
        {
            b++;
            if(w>0){
                num[x]=w;
                w=0;
                x++;
            }
        }
        if(i==n-1){
            if(w>0){
                num[x]=w;
                x++;
            }
            if(b>0){
                num[x]=b;
                x++;
            }
        }
    }
    if(x==1){
        cout<<"YES"<<endl;
        return 0;
    }
    for(ll i=0; i<x-1; i++)
    {
        if(num[i]!=num[i+1]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}