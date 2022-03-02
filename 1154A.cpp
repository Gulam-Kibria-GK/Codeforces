#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,x,y;
    ll arr[6];
    for(i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    ll c=arr[3]-arr[0];
    ll b=arr[2]-c;
    ll a=arr[3]-c-b;
    cout<<a<<" "<<b<<" "<<c<<endl;
}